#include "binary_trees.h"
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t cnt = 0;

        if (tree == NULL)
                return 0;
	if (tree->left != NULL)
		cnt++;
	if (tree->right != NULL)
		cnt++;
	if (tree->right == NULL && tree->left == NULL)
		cnt++;
        return cnt;
}
