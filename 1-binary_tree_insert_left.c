#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @value: Is the value to put in the new node.
 * @parent: Is a pointer to the parent node of the node to create.
 * Return: Return: Pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode;

	if (parent == NULL)
		return (NULL);

	leftNode = malloc(sizeof(binary_tree_t));

	if (leftNode == NULL)
		return (NULL);

	leftNode->n = value;
	leftNode->parent = parent;
	leftNode->left = NULL;
	leftNode->right = NULL;

	if (parent->left == NULL)
		parent->left = leftNode;
	else
	{
		parent->left->left = leftNode;
		leftNode->parent = parent->left;
	}

	return (leftNode);
}
