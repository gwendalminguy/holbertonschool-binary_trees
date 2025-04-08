#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: the lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	binary_tree_t *current;
	binary_tree_t *compare;

	current = (binary_tree_t *)first;

	/* Checking for first and each of its parents */
	while (current != NULL)
	{
		compare = (binary_tree_t *)second;

		/* Checking for second and each of its parents */
		while (compare != NULL)
		{
			/* Returning the node if both are the same */
			if (current == compare)
				return (current);

			compare = compare->parent;
		}

		current = current->parent;
	}

	return (NULL);
}
