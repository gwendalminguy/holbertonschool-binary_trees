#include "binary_trees.h"

/**
 * bst_search - ...
 * @tree: ...
 * @value: ...
 *
 * Return: ...
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *current = (bst_t *)tree;

	while (current != NULL)
	{
		if (current->n > value)
			current = current->left;
		else if (current->n < value)
			current = current->right;
		else
			return (current);
	}

	return (NULL);
}
