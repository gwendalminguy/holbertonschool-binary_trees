#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node in a binary tree
 * @tree: pointer to the root node
 *
 * Return: pointer to the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Checking if node is NULL or the root of the tree */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Returning the sibling node */
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
