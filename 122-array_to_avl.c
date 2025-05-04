#include "binary_trees.h"

/**
 * array_to_avl - builds an AVL tree from an array of integers
 * @array: array of integers
 * @size: size of array
 *
 * Return: pointer to the root node
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *root = NULL;
	size_t i = 0;

	for (i = 0 ; i < size ; i++)
		avl_insert(&root, array[i]);

	return (root);
}
