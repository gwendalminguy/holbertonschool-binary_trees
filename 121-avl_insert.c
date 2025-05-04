#include "binary_trees.h"

avl_t *avl_balance(avl_t *tree, int factor);

/**
 * avl_insert - inserts a new node in an AVL tree
 * @tree: pointer to the root node
 * @value: value of the node
 *
 * Return: pointer to the new node
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *current = *tree;
	avl_t *new = NULL;
	avl_t *parent = NULL;
	avl_t *above;
	int factor = 0;

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

	/* Creating the new node */
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

	/* Keeping the tree balanced */
	above = new;

	while (above != NULL)
	{
		factor = binary_tree_balance(above);

		if (factor < -1 || factor > 1)
			above = avl_balance(above, factor);
		if (above->parent == NULL)
			*tree = above;
		above = above->parent;
	}

	return (new);
}

/**
 * avl_balance - balances a binary tree
 * @tree: pointer to the root node
 * @factor: balance factor of tree
 *
 * Return: pointer to the root node
 */
avl_t *avl_balance(avl_t *tree, int factor)
{
	if (tree->left != NULL || tree->right != NULL)
	{
		if (factor > 1)
		{
			if (tree->left != NULL && binary_tree_balance(tree->left) < 0)
				tree->left = binary_tree_rotate_left(tree->left);
			tree = binary_tree_rotate_right(tree);
		}
		else if (factor < -1)
		{
			if (tree->right != NULL && binary_tree_balance(tree->right) > 0)
				tree->right = binary_tree_rotate_right(tree->right);
			tree = binary_tree_rotate_left(tree);
		}
	}

	return (tree);
}
