#include "binary_trees.h"

/**
 * bst_insert - inserts a new node in a binary search tree
 * @tree: pointer to the root node
 * @value: value of the node
 *
 * Return: pointer to the new node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current = *tree;
	bst_t *new = NULL;
	bst_t *parent = NULL;

	while (current != NULL)
	{
		parent = current;

		if (current->n > value)
			current = current->left;
		else if (current->n < value)
			current = current->right;
		else
			return (NULL);
	}

	new = malloc(sizeof(bst_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = NULL;
	new->left = NULL;
	new->right = NULL;

	if (*tree == NULL)
		*tree = new;
	else
	{
		new->parent = parent;
		if (parent->n > value)
			parent->left = new;
		else
			parent->right = new;
	}

	return (new);
}
