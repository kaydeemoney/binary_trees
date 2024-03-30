#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to store the newkd node.
 *
 * Return: A pointer to the created node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newkd;

	if (parent == NULL)
		return (NULL);

	newkd = binary_tree_node(parent, value);
	if (newkd == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newkd->left = parent->left;
		parent->left->parent = newkd;
	}
	parent->left = newkd;

	return (newkd);
}
