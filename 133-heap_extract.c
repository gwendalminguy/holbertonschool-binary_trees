#include "binary_trees.h"

heap_t *swap_down(heap_t *parent, heap_t *child);

/**
 * heap_extract - extracts the root node of a max binary heap tree
 * @root: pointer to the root node
 *
 * Return: value of the node
 */
int heap_extract(heap_t **root)
{
	heap_t *current = *root;
	int value = 0;

	if (current != NULL)
	{
		value = current->n;

		/* Swapping down the node until it has no child */
		while (current->left != NULL || current->right != NULL)
		{
			if (current->right == NULL)
				current = swap_down(current, current->left);
			else if (current->left == NULL)
				current = swap_down(current, current->right);
			else
			{
				if (current->left->n > current->right->n)
					current = swap_down(current, current->left);
				else
					current = swap_down(current, current->right);
			}

			if (*root == current)
				*root = current->parent;
		}

		/* Removing node from tree */
		if (current->parent != NULL)
		{
			if (current == current->parent->left)
				current->parent->left = NULL;
			else
				current->parent->right = NULL;
		}

		/* Case of the last node */
		else
			*root = NULL;

		/* Freeing the node */
		free(current);
	}
	return (value);
}

/**
 * swap_down - swaps a child node with its parent node
 * @parent: pointer to the parent node
 * @child: pointer to the child node
 *
 * Return: pointer to the new child
 */
heap_t *swap_down(heap_t *parent, heap_t *child)
{
	heap_t *temp;

	/* Updating node above */
	if (parent->parent != NULL)
	{
		if (parent->parent->left == parent)
			parent->parent->left = child;
		else
			parent->parent->right = child;
	}

	child->parent = parent->parent;
	parent->parent = child;

	/* Case where child is a left node */
	if (parent->left == child)
	{
		temp = parent->right;
		parent->right = child->right;
		child->right = temp;

		if (parent->right != NULL)
			parent->right->parent = parent;

		if (child->right != NULL)
			child->right->parent = child;

		parent->left = child->left;
		child->left = parent;

		if (parent->left != NULL)
			parent->left->parent = parent;
	}

	/* Case where child is a right node */
	else
	{
		temp = parent->left;
		parent->left = child->left;
		child->left = temp;

		if (parent->left != NULL)
			parent->left->parent = parent;

		if (child->left != NULL)
			child->left->parent = child;

		parent->right = child->right;
		child->right = parent;

		if (parent->right != NULL)
			parent->right->parent = parent;
	}

	return (parent);
}
