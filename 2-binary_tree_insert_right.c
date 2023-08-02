#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_to_be_created;

	if (parent == NULL)
     {
		return (NULL);
     }
	node_to_be_created = malloc(sizeof(binary_tree_t));
	if (node_to_be_created == NULL)
     {
		return (NULL);
     }

	node_to_be_created->parent = parent;
	node_to_be_created->n = value;
	node_to_be_created->left = NULL;

	if (parent->right)
	{
		node_to_be_created->right = parent->right;
		parent->right = node_to_be_created;
	}
	else
	{
		parent->right = node_to_be_created;
		node_to_be_created->right = NULL;
	}
	return (node_to_be_created);
}
