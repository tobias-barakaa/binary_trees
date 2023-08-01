#include "binary_trees.h"

/**
 * binary_tree_node - Function to create a binary tree node
 *
 * @parent: Pointer to the parent node of the new node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    if (parent == NULL)
    {
        return NULL; // Return NULL if parent is NULL
    }

    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
    {
        return NULL; // Return NULL if memory allocation fails
    }

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node; // Return the pointer to the new node
}
