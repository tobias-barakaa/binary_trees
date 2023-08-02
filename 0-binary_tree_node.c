#include "binary_trees.h"

/**
 * binary_tree_node - Function to create a binary tree and traverse
 *
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the the node to be created
 *
 * Return: Pointer to the new node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    // Step 1: Allocate memory for the new node
    binary_tree_t *node_to_create = malloc(sizeof(binary_tree_t));
    // Step 2: Check if memory allocation was successful
    if (node_to_create == NULL)
    {
        // Return NULL if memory allocation failed
        return (NULL);
    }

    // Step 3: Initialize the new node with the provided value and parent
    node_to_create->n = value;
    node_to_create->parent = parent;
    node_to_create->left = NULL;
    node_to_create->right = NULL;

    // Step 4: Return the pointer to the newly created node
    return (node_to_create);
}
