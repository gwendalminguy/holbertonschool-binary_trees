#include "binary_trees.h"

int is_all_lower(const binary_tree_t *subtree, int n);
int is_all_greater(const binary_tree_t *subtree, int n);

/**
 * binary_tree_is_bst - checks if a binary tree is a binary search tree
 * @tree: pointer to the root node
 *
 * Return: 1 if tree is a binary search tree ; 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && !is_all_lower(tree->left, tree->n))
		return (0);

	if (tree->right != NULL && !is_all_greater(tree->right, tree->n))
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_bst(tree->left) * binary_tree_is_bst(tree->right));
	else if (tree->left != NULL)
		return (binary_tree_is_bst(tree->left));
	else
		return (binary_tree_is_bst(tree->right));

	return (0);
}

/**
 * is_all_lower - checks if all values in a subtree are lower than n
 * @subtree: subtree to check
 * @n: comparing value
 *
 * Return: 1 if all values are lower ; 0 otherwise
 */
int is_all_lower(const binary_tree_t *subtree, int n)
{
	if (subtree->left == NULL && subtree->right == NULL)
		return (1);

	if (subtree->left != NULL && subtree->left->n >= n)
		return (0);

	if (subtree->left != NULL && subtree->right->n >= n)
		return (0);

	if (subtree->left != NULL && subtree->right != NULL)
		return (is_all_lower(subtree->left, n) * is_all_lower(subtree->right, n));
	else if (subtree->left != NULL)
		return (is_all_lower(subtree->left, n));
	else
		return (is_all_lower(subtree->right, n));
}

/**
 * is_all_greater - checks if all values in a subtree are greater than n
 * @subtree: subtree to check
 * @n: comparing value
 *
 * Return: 1 if all values are greater ; 0 otherwise
 */
int is_all_greater(const binary_tree_t *subtree, int n)
{
	if (subtree->left == NULL && subtree->right == NULL)
		return (1);

	if (subtree->left != NULL && subtree->left->n < n)
		return (0);

	if (subtree->left != NULL && subtree->right->n < n)
		return (0);

	if (subtree->left != NULL && subtree->right != NULL)
		return (is_all_greater(subtree->left, n) * is_all_greater(subtree->right, n));
	else if (subtree->left != NULL)
		return (is_all_greater(subtree->left, n));
	else
		return (is_all_greater(subtree->right, n));
}
