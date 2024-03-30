#include "binary_trees.h"

/**
 * binary_tree_is_leaf - if a node is a leaf, then kd checks.
 *
 * @node: A pointer to the node to check by kd code.
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
