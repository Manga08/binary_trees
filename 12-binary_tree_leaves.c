#include "binary_trees.h"
/**
 * binary_tree_leaves - check how many leaves contain a node.
 * @tree: Pointer to the node of tree
 * Return: Return the count levels.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
