#include "binary_trees.h"

/**
 * binary_tree_depth - ...
 * @tree:
 *
 * Return: ...
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
