#include <stdlib.h>
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

    // Step 3: Insert the new node as the left-child of the parent
    // If parent already has a left-child, make it the left-child of the new node
    if (parent->left != NULL)
    {
        node_to_create->left = parent->left;
        parent->left->parent = node_to_create;
    }

    // Update the parent's left-child to the new node
    parent->left = node_to_create;

    // Step 4: Return the pointer to the newly created node
    return (node_to_create);
}

