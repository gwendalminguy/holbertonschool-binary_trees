#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates a binary tree to the left
 * @tree: pointer to the root node
 *
 * Return: pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *current = tree;
	binary_tree_t *temp;
	binary_tree_t *above;

	if (tree == NULL)
		return (NULL);

	if (tree->right == NULL)
		return (tree);

	above = current->parent;
	current = current->right;
	temp = current->left;

	if (temp != NULL)
		temp->parent = current->parent;

	current->left = current->parent;
	current->left->parent = current;
	current->left->right = temp;
	current->parent = above;

	return (current);
}
