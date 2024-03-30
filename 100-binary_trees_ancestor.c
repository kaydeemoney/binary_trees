#include "binary_trees.h"

/**
 * binary_trees_ancestor - ancestor the lowest common ancestor of two nodes.
 *
 * @first: kdpointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node of the two given nodes.
 *         If no common ancestor was found, your function must return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mama_kd, *pop;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mama_kd = first->parent, pop = second->parent;
	if (first == pop || !mama_kd || (!mama_kd->parent && pop))
		return (binary_trees_ancestor(first, pop));
	else if (mama_kd == second || !pop || (!pop->parent && mama_kd))
		return (binary_trees_ancestor(mama_kd, second));

	return (binary_trees_ancestor(mama_kd, pop));
}
