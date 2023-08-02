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
    // Step 1: Check if the parent node is NULL
    if (parent == NULL)
    {
        return (NULL);
    }

    // Step 2: Create a new node with the provided value and parent
    binary_tree_t *node_to_create = binary_tree_node(parent, value);
    if (node_to_create == NULL)
    {
        return (NULL);
    }

    node_to_create->n = value;
    node_to_create->left = NULL;
    node_to_create->right = NULL;

    if (parent->left == NULL)
    {
        parent->left = node_to_create;
        node_to_create->parent = parent;
    }
    else
    {
     binary_tree_t *store = parent->left;
     parent->left = node_to_create;
     node_to_create->left = store;
     node_to_create->parent = parent;
	store->parent = node_to_create;

    }
    return (node_to_create);
}
