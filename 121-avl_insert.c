#include "binary_trees.h"

avl_t *avl_balance(avl_t *root);

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

	avl_balance(*tree);

	return (new);
}

/**
 * avl_balance - balances a binary tree
 * @tree: pointer to the root node
 *
 * Return: pointer to the root node
 */
avl_t *avl_balance(avl_t *tree)
{
	int factor = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			if (tree->left != NULL)
				tree->left = avl_balance(tree->left);

			if (tree->right != NULL)
				tree->right = avl_balance(tree->right);

			factor = binary_tree_balance(tree);

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
	}

	return (tree);
}
