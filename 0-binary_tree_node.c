#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node.
 *
 * @parent: A pointer to the parent of the node that kaydee make.
 * @value: The value to be puted on the newkd node created from above.
 *
 * Return: If it fails it will give kd NULL 
 * else - it will return a pointer to the newkd node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newkd;

	newkd = malloc(sizeof(binary_tree_t));
	if (newkd == NULL)
		return (NULL);

	newkd->n = value;
	newkd->parent = parent;
	newkd->left = NULL;
	newkd->right = NULL;

	return (newkd);
}
