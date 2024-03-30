#include "binary_trees.h"

/**
 * binary_tree_is_root - if a given node is a root, it helps kd check.
 *
 * @node: A pointer to the node to check by kd.
 *
 * Return: 1 if node is a root, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
