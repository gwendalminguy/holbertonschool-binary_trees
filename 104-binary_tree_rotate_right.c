#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates a binary tree to the right
 * @tree: pointer to the root node
 *
 * Return: pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *current = tree;
	binary_tree_t *temp;
	binary_tree_t *above;

	if (tree == NULL)
		return (NULL);

	if (tree->left == NULL)
		return (tree);

	above = current->parent;
	current = current->left;
	temp = current->right;

	if (temp != NULL)
		temp->parent = current->parent;

	current->right = current->parent;
	current->right->parent = current;
	current->right->left = temp;
	current->parent = above;

	return (current);
}
