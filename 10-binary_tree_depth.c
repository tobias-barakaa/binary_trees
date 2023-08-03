#include "binary_trees.h"
/**
 * binary_tree_depth - determines depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth.
 * Return: depth of binary tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
if (tree->parent == NULL)
{
return (0);
}
return (1 + binary_tree_depth(tree->parent));
}
