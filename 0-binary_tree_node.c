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
     binary_tree_t *node_to_create;

     node_to_create = malloc(sizeof(binary_tree_t));
     if (node_to_create == NULL)
     {
          return (NULL);
     }
     
     node_to_create->n = value;
     node_to_create->parent = parent;
     node_to_create->left = NULL;
     node_to_create->right = NULL;

     return (node_to_create);
}
