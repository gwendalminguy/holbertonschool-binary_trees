#include "binary_trees.h"

int total_nodes(const binary_tree_t *tree);
heap_t *find_last(heap_t **current_list, int nodes);
heap_t *move_last(heap_t *last, heap_t *root);
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
	heap_t *current_list[2];
	heap_t *last;
	int nodes = 0, value = 0, first = 1;

	if (current != NULL)
	{
		nodes = total_nodes(*root);
		value = current->n;

		/*Finding last node in levelorder */
		current_list[0] = current;
		current_list[1] = NULL;
		if (current->left != NULL || current->right != NULL)
		{
			last = find_last(current_list, nodes);
			last = move_last(last, current);
		}
		else
		{
			free(current);
			*root = NULL;
			return (value);
		}

		/* Swapping down the node until it has no child */
		while (last->left != NULL)
		{
			if (last->right == NULL)
			{
				if (last->left->n > last->n)
					last = swap_down(last, last->left);
				else
					break;
			}
			else if (last->left->n > last->right->n)
			{
				if (last->left->n > last->n)
					last = swap_down(last, last->left);
				else
					break;
			}
			else
			{
				if (last->right->n > last->n)
					last = swap_down(last, last->right);
				else
					break;
			}

			if (first)
				*root = last->parent;

			first = 0;
		}
	}
	return (value);
}

/**
 * total_nodes - counts total number of nodes in a binary tree
 * @tree: pointer to the root node
 *
 * Return: total number of nodes
 */
int total_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Returning 1 if the node is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Returning the sum of the number of nodes of both children otherwise */
	return (total_nodes(tree->left) + total_nodes(tree->right) + 1);
}

/**
 * find_last - finds the last node in levelorder
 * @current_list: list of nodes
 * @nodes: total number of nodes
 *
 * Return: pointer to the last node
 */
heap_t *find_last(heap_t **current_list, int nodes)
{
	heap_t *children_list[1024];
	int i = 0, j = 0, end = 0;

	while (current_list[i] != NULL)
	{
		children_list[j] = current_list[i]->left;
		j++;

		children_list[j] = current_list[i]->right;
		j++;

		if (nodes == 1)
		{
			end = 1;
			break;
		}

		i++;
		nodes--;
	}

	/* Returning node if end is reached */
	if (end)
		return (current_list[i]);

	/* Terminating the new list with NULL */
	children_list[j] = NULL;

	/* Processing the new list */
	return (find_last(children_list, nodes));
}

/**
 * move_last - replaces root node with last node
 * @last: pointer to the last node
 * @root: pointer to the root node
 *
 * Return: pointer to the new root node
 */
heap_t *move_last(heap_t *last, heap_t *root)
{
	if (last->parent->right == last)
		last->parent->right = NULL;
	else
		last->parent->left = NULL;

	last->parent = NULL;
	last->left = root->left;
	last->right = root->right;

	if (last->left != NULL)
		last->left->parent = last;
	if (last->right != NULL)
		last->right->parent = last;

	free(root);

	return (last);
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
