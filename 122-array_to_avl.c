#include "binary_trees.h"

/**
 * array_to_avl - Builds an AVL tree from an array.
 *
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of element in the array.
 *
 * Return: A pointer to the root node of the created AVL tree, NULL on failure.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t index, shelbyindex;

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		for (shelbyindex = 0; shelbyindex < index; shelbyindex++)
		{
			if (array[shelbyindex] == array[index])
				break;
		}
		if (shelbyindex == index)
		{
			if (avl_insert(&tree, array[index]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
