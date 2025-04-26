#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node
 *
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t treeSize;

	if (tree != NULL)
	{
		treeSize = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
		return (treeSize);
	}

	return (0);
}
