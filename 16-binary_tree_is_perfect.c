#include "binary_trees.h"
/**
 * score - Goes through a binary tree using pre-order.
 * @node: Pointer to the node of tree
 * Return: Return the count balance in right and left tree.
 */
int score(binary_tree_t *node)
{
	int lr = 0;
	int lf = 0;

	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	if (node->left)
		lf = 1 + score(node->left);
	if (node->right)
		lr = 1 + score(node->right);
	if (lf > lr)
		return (lf);
	else
		return (lr);
}
/**
 * binary_tree_balance - Function that return balance coefficient.
 * @tree: Pointer to the node of tree
 * Return: Return balance coefficient.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (score(tree->left) - score(tree->right));
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to traverse.
 * Return: 0 or 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (1 * binary_tree_is_full(tree->left) *
			binary_tree_is_full(tree->right));
	return (0);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to traverse.
 * Return: 0 or 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_balance(tree) == 0)
	{
		if (binary_tree_is_full(tree) == 1)
			return (1);
	}
	return (0);
}
