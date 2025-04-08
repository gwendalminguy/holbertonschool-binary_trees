#include "binary_trees.h"

void binary_tree_children(binary_tree_t **list, void (*func)(int));

/**
 * binary_tree_levelorder - processes a binary tree using level order traversal
 * @tree: pointer to the root node
 * @func: pointer to function
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *currentList[2];

	if (tree != NULL && func != NULL)
	{
		/* Adding the root node to the list */
		currentList[0] = (binary_tree_t *)tree;

		/* Terminating the list with NULL */
		currentList[1] = NULL;

		/* Processing the list */
		binary_tree_children(currentList, func);
	}
}

/**
 * binary_tree_children - processes a list of nodes and its chilren
 * @currentList: list of nodes
 * @func: pointer to function
 */
void binary_tree_children(binary_tree_t **currentList, void (*func)(int))
{
	binary_tree_t *childrenList[100];
	int i = 0, j = 0;

	if (currentList[0] != NULL)
	{
		while (currentList[i] != NULL)
		{
			/* Processing the node */
			func((currentList[i])->n);

			/* Adding its left child to the new list */
			if ((currentList[i])->left != NULL)
			{
				childrenList[j] = (currentList[i])->left;
				j++;
			}

			/* Adding its right child to the new list */
			if ((currentList[i])->right != NULL)
			{
				childrenList[j] = (currentList[i])->right;
				j++;
			}

			i++;
		}

		/* Terminating the new list with NULL */
		childrenList[j] = NULL;

		/* Processing the new list */
		binary_tree_children(childrenList, *func);
	}
}
