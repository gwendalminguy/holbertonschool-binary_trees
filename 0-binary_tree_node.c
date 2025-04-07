#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node
 * @value: value of the node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	/* Checking if both children already exist */
	if (parent->left != NULL && parent->right != NULL)
		return (NULL);

	/* Allocating memory for the new node */
	new = malloc(sizeof(binary_tree_t));

	/* Checking for malloc failure */
	if (new == NULL)
		return (NULL);

	/* Setting the new node values */
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	/* Updating parent */
	if (parent->left == NULL)
		parent->left = new;

	else
		parent->right = new;

	return (new);
}
