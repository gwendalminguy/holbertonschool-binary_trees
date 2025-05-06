#include "binary_trees.h"

size_t count_nodes(const binary_tree_t *tree);

/**
 * heap_to_sorted_array - builds a sorted array in descending order from a max heap binary tree
 * @heap: pointer to the root node
 * @size: size of array
 *
 * Return: ...
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int *array;
	size_t i = 0;
	int value = 0;

	*size = count_nodes(heap);
	array = malloc(sizeof(int) * *size);

	if (array == NULL)
		return (NULL);

	while (i != *size)
	{
		value = heap_extract(&heap);
		array[i] = value;
		i++;
	}

	return (array);
}

/**
 * count_nodes - counts number of nodes in a binary tree
 * @tree: pointer to the root node
 *
 * Return: total number of nodes
 */
size_t count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Returning 1 if the node is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Returning the sum of the number of nodes of both children otherwise */
	return (count_nodes(tree->left) + count_nodes(tree->right) + 1);
}
