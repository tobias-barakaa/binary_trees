#include "binary_trees.h"

/**
 * binary_tree_is_root - if node is a root(checks)
 *@node: Pointer to the node
 *Return: 1 if node is a root, 0 if else
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}

if (node->parent == NULL)
{
return (1);
}
return (0);
}

