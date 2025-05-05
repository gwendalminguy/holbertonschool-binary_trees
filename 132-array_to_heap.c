#include "binary_trees.h"

/**
 * array_to_heap - builds a max heap binary tree from an array of integers
 * @array: array of integers
 * @size: size of array
 *
 * Return: pointer to the root node
 */
heap_t *array_to_heap(int *array, size_t size)
{
	heap_t *root = NULL;
	size_t i = 0;

	for (i = 0 ; i < size ; i++)
		heap_insert(&root, array[i]);

	return (root);
}
