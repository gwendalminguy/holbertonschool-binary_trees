#include "binary_trees.h"

/**
 * binary_tree_nodes - counts number of nodes in a binary tree
 * @tree: pointer to the root node
 *
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Returning 0 if the node is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Returning the sum of the number of nodes of both children otherwise */
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
