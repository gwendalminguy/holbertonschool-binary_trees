#include "binary_trees.h"

/**
 * binary_tree_is_heap - checks if a binary tree is a max binary heap
 * @tree: pointer to the root node
 *
 * Return: 1 if tree is a max binary heap ; 0 otherwise
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!binary_tree_is_complete(tree))
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->left->n > tree->n)
		return (0);
	else if (tree->right != NULL && tree->right->n > tree->n)
		return (0);

	if (tree->right == NULL)
		return (binary_tree_is_heap(tree->left));
	else if (tree->left == NULL)
		return (binary_tree_is_heap(tree->right));
	else
		return (binary_tree_is_heap(tree->left) * binary_tree_is_heap(tree->right));
}
