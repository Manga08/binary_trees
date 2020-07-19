#include "binary_trees.h"
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode;

	if (parent == NULL)
		return NULL;
	leftNode = malloc(sizeof(binary_tree_t));
	if (leftNode == NULL)
		return NULL;
	leftNode->n = value;
	leftNode->parent = parent;
	leftNode->left = NULL;
	leftNode->right = NULL;
	if (parent->left == NULL){
		parent->left = leftNode;
	}
	else{
		parent->left->left = leftNode;
		leftNode->parent = parent->left;
	}
	return leftNode;
}
