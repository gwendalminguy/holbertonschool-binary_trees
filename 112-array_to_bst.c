#include "binary_trees.h"

/**
 * array_to_bst - builds a binary search tree from an array of integers
 * @array: array of integers
 * @size: size of array
 *
 * Return: pointer to the root node
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i = 0;

	for (i = 0 ; i < size ; i++)
		bst_insert(&root, array[i]);

	return (root);
}
