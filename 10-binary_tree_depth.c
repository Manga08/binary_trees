#include "binary_trees.h"
/**
 * binary_tree_depth - Goes through a binary tree using pre-order.
 * @tree: Pointer to the node of tree
 * Return: Return the count levels.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *aux = tree;
	size_t cnt = 0;

	if (tree == NULL)
		return (0);
	for (; aux != NULL; aux = aux->parent)
		cnt++;
	return (--cnt);
}
