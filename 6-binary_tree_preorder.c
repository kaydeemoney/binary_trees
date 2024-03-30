#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a kd binary tree by employing pre-order traversal..
 *
 * @tree: the pointer to the root node of the tree to traverse.
 * @func: kd pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
