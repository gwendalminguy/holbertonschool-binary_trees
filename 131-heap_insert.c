#include "binary_trees.h"

heap_t *find_position(heap_t **current_list);
heap_t *swap_nodes(heap_t *parent, heap_t *child);

/**
 * heap_insert - inserts a new node in a max binary heap
 * @root: pointer to the root node
 * @value: value of the node
 *
 * Return: pointer to the new node
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *current = *root;
	heap_t *current_list[2];
	heap_t *new = NULL;

	/* Finding first NULL node in levelorder */
	if (current != NULL)
	{
		current_list[0] = current;
		current_list[1] = NULL;
		current = find_position(current_list);
	}

	/* Creating the new node */
	new = malloc(sizeof(heap_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = NULL;
	new->left = NULL;
	new->right = NULL;

	if (*root == NULL)
		*root = new;
	else
	{
		new->parent = current;

		if (current->left == NULL)
			current->left = new;
		else
			current->right = new;
	}

	/* Swapping up the node until right position found */
	while (current != NULL && current->n < value)
	{
		new = swap_nodes(current, new);
		current = new->parent;
	}

	if (new->parent == NULL)
		*root = new;

	return (new);
}

/**
 * find_position - finds first NULL node in levelorder
 * @current_list: list of nodes
 *
 * Return: pointer to parent of position
 */
heap_t *find_position(heap_t **current_list)
{
	heap_t *children_list[1024];
	int i = 0, j = 0, end = 0;

	while (current_list[i] != NULL)
	{
		/* Adding its left child to the new list */
		if (current_list[i]->left != NULL)
		{
			children_list[j] = current_list[i]->left;
			j++;
		}
		else
		{
			end = 1;
			break;
		}

		/* Adding its right child to the new list */
		if (current_list[i]->right != NULL)
		{
			children_list[j] = current_list[i]->right;
			j++;
		}
		else
		{
			end = 1;
			break;
		}

		i++;
	}

	/* Returning node if NULL found */
	if (end)
		return (current_list[i]);

	/* Terminating the new list with NULL */
	children_list[j] = NULL;

	/* Processing the new list */
	return (find_position(children_list));
}

/**
 * swap_nodes - swaps a child node with its parent node
 * @parent: pointer to the parent node
 * @child: pointer to the child node
 *
 * Return: pointer to the new parent
 */
heap_t *swap_nodes(heap_t *parent, heap_t *child)
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

	return (child);
}
