#include "binary_trees.h"
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;
	if (parent == NULL)
		return NULL;
	rightNode = malloc(sizeof(binary_tree_t));
	if (rightNode == NULL)
		return NULL;
	rightNode->n = value;
	rightNode->parent = parent;
	rightNode->left = NULL;
	rightNode->right = NULL;
	if (parent->right == NULL){
		parent->right = rightNode;
	}
	else
	{
		parent->right->right = rightNode;
		rightNode->parent = parent->right;
	}
	return rightNode;
}
