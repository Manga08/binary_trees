#include "binary_trees.h"
/**
 * binary_tree_is_root - Funtion that check if the node is a root
 * @node: Is a pointer to the node to check.
 * Return: If node is NULL, return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->parent)
		return (1);

	return (0);
}
