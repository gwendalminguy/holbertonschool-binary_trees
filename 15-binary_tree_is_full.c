#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a tree is full
 * @tree: pointer to the root node
 *
 * Return: 1 if tree is full ; 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Checking if children aren't NULL and if children are full */
	if (tree->left != NULL && tree->right != NULL)
	{
		if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
			return (1);
	}

	return (0);
}
