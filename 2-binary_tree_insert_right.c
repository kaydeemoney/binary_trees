#include "binary_trees.h"

/**
 * binary_tree_insert_right -a node by kd as the right-child of a node.
 *
 * @parent: A pointer to the node of kd to insert the right-child in.
 * @value: The value to store in the newkd node.
 *
 * Return: A pointer to the created node, NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newkd;

	if (parent == NULL)
		return (NULL);

	newkd = binary_tree_node(parent, value);
	if (newkd == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newkd->right = parent->right;
		parent->right->parent = newkd;
	}
	parent->right = newkd;

	return (newkd);
}
