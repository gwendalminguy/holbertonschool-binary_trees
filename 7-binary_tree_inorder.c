#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using in order traversal
 * @tree: pointer to the root node of the tree to traverse.
 * @func: Pointer to function that prints data within the node.
 *
 * Return: nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_preorder(tree->left, func);
		func(tree->n);
		binary_tree_preorder(tree->right, func);
	}
}


