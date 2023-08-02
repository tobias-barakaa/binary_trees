#include "binary_trees.h"

/**
 * binary_tree_insert_right - Add new node at right side.
 * @parent: pointer to parent node.
 * @value: value to add inside node.
 * Return: pointer to new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;

	if (parent->right)
	{
		node->right = parent->right;
		parent->right = node;
	}
	else
	{
		parent->right = node;
		node->right = NULL;
	}
	return (node);
}
