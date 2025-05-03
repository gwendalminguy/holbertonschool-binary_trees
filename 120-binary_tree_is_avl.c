#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "110-binary_tree_is_bst.c"

int is_avl_recursion(const binary_tree_t *tree);

/**
 * binary_tree_is_avl - checks if a binary tree is an AVL tree
 * @tree: pointer to the root node
 *
 * Return: 1 if tree is an AVL tree ; 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!binary_tree_is_bst(tree))
		return (0);

	return (is_avl_recursion(tree));
}

/**
 * is_avl_recursion - checks if a binary tree is an AVL tree
 * @tree: pointer to the root node
 *
 * Return: 1 if tree is an AVL tree ; 0 otherwise
 */
int is_avl_recursion(const binary_tree_t *tree)
{
	int factor = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		factor = binary_tree_balance(tree);

	if (factor < -1 || factor > 1)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left == NULL)
		return (binary_tree_is_avl(tree->right));
	else if (tree->right == NULL)
		return (binary_tree_is_avl(tree->left));
	else
		return (binary_tree_is_avl(tree->left) * binary_tree_is_avl(tree->right));
}
