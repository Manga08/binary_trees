#include "binary_trees.h"
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
int score(binary_tree_t *node)
{
	int lr = 0;
	int lf = 0;
	printf("entre\n");
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	if (node->left)
		lf = 1 + score(node->left);
	else
		lf = 0;
	if (node->right)
		lr = 1 + score(node->right);
	else
		lr = 0;
	if (lf > lr)
		return (lf);
	else
		return (lr);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	printf("no pude entrar \n");
	printf("muestrame esto\n");
        return (score(tree->left) - score(tree->right));
}
