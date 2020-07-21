#include "binary_trees.h"
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
int height(struct node* node)
{
	if (node == NULL)
		return 0;

	return 1 + height(node->left);
}

int binary_tree_balance(const binary_tree_t *tree)
{
        
        return cnt;
}
