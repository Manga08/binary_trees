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
