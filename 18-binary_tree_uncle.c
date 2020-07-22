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
/**
 * binary_tree_uncle - Goes through a binary found the uncle of a node.
 * @node: Pointer to the node of tree
 * Return: Return the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle, *parent;
	size_t level = 0;

	if (node == NULL)
		return (NULL);
	level = binary_tree_depth(node);
	if (level < 2)
		return (NULL);
	parent = node->parent->parent;
	uncle = node->parent;
	if (parent->left == uncle)
		return (parent->right);
	return (parent->left);
}
