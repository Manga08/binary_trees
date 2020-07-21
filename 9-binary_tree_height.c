#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int count_left = 0, count_right = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	if (tree->left)
		count_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		count_right = 1 + binary_tree_height(tree->right);

	if (count_left > count_right)
		return (count_left);
	return (count_right);
}
