#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a binary tree
 * @tree: pointer to the root node
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Returning 1 if the node is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Returning the sum of the number of leaves of both children otherwise */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
