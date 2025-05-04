#include "binary_trees.h"

int count_nodes(binary_tree_t **list, int nodes);
int total_nodes(const binary_tree_t *tree);

/**
 * binary_tree_is_complete - checks if a tree is complete
 * @tree: pointer to the root node
 *
 * Return: 1 if tree is complete ; 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *currentList[2];
	int total = 0;
	int nodes = 0;

	if (tree != NULL)
	{
		/* Counting total number of nodes */
		total = count_nodes(tree);

		/* Adding the root node to the list */
		currentList[0] = (binary_tree_t *)tree;

		/* Terminating the list with NULL */
		currentList[1] = NULL;

		/* Processing the list */
		nodes = count_nodes(currentList, nodes) + 1;

		/* Comparing values */
		if (total == nodes)
			return (1);

		return (0);
	}
}

/**
 * count_nodes - counts nodes in levelorder until first NULL is found
 * @currentList: list of nodes
 * @nodes: number of nodes
 *
 * Return: number of nodes found
 */
int count_nodes(binary_tree_t **currentList, int nodes)
{
	binary_tree_t *childrenList[1024];
	int i = 0, j = 0;
	int end = 0;

	if (currentList[0] != NULL)
	{
		while (currentList[i] != NULL)
		{
			/* Adding its left child to the new list */
			if (currentList[i]->left != NULL)
			{
				childrenList[j] = currentList[i]->left;
				nodes++;
				j++;
			}
			else
			{
				end = 1;
				break;
			}

			/* Adding its right child to the new list */
			if (currentList[i]->right != NULL)
			{
				childrenList[j] = currentList[i]->right;
				nodes++;
				j++;
			}
			else
			{
				end = 1;
				break;
			}

			i++;
		}

		/* Returning total if NULL found */
		if (end)
			return (nodes);

		/* Terminating the new list with NULL */
		childrenList[j] = NULL;

		/* Processing the new list */
		return (count_nodes(childrenList, nodes));
	}
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
