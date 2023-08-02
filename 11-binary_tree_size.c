#include "binary_trees.h"
/**
*binary_tree_size - measure the size of the tree
*@tree:  pointer to the root node of the tree to measure the size
*
*Return: size of the tree and 0 if NULL
*
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
