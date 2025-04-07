#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 *
 * Return: balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int heightLeft = 0;
	int heightRight = 0;

	if (tree != NULL)
	{
		/* Measuring the height of each child */
		heightLeft = binary_tree_height(tree->left);
		heightRight = binary_tree_height(tree->right);

		if (tree->left == NULL)
			heightLeft = -1;

		if (tree->right == NULL)
			heightRight = -1;
	}

	/* Returning the difference of heights */
	return (heightLeft - heightRight);
}
