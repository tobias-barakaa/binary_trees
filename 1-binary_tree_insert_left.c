#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node_to_be_created;
binary_tree_t *store;
if (parent == NULL)
{
return (NULL);
}

node_to_be_created = malloc(sizeof(binary_tree_t));
if (node_to_be_created == NULL)
{
return (NULL);
}
node_to_be_created->n = value;
node_to_be_created->parent = parent;
node_to_be_created->right = NULL;
if (parent->left)
{
store = parent->left;
parent->left = node_to_be_created;
node_to_be_created->left = store;
store->parent = node_to_be_created;
}
else
{
parent->left = node_to_be_created;
node_to_be_created->left = NULL;
}
return (node_to_be_created);
}
