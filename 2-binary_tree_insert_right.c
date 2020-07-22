#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @value: Is the value to put in the new node.
 * @parent: Is a pointer to the parent node of the node to create.
 * Return: Return: Pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;

	if (parent == NULL)
		return (NULL);
	rightNode = malloc(sizeof(binary_tree_t));
	if (rightNode == NULL)
		return (NULL);
	rightNode->n = value;
	rightNode->parent = parent;
	rightNode->left = NULL;
	rightNode->right = NULL;

	if (parent->right != NULL)
	{
		rightNode->right = parent->right;
		parent->right->parent = rightNode;
	}
	parent->right = rightNode;
	return (rightNode);
}
