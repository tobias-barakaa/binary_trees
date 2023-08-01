#include "binary_trees.h"

/**
*binary_tree_node - function to insert at binary trees
*@parent: parent of the nodes
*@value: data to insert
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
   int n;

   *binary_tree new_node = malloc(sizeof(binary_tree));
    if (binary_tree != NULL)
{
   new_node->n = value;
   new_node->parent = parent;
   new_node->left = NULL;
   new_node->right = NULL;
}
else
{
  return (NULL);
}

  return (new_node);
}
