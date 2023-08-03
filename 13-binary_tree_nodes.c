#include "binary_trees.h"

/**
*binary_tree_nodes -  counts the nodes with at least 1 child in a binary tree
*@tree: a pointer to the root node of the tree to count the number of nodes
*
*Return: number of nodes and return 0 if tree is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}


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


/**
*binary_tree_leaves - counts the leaves of a binary tree
*@tree: a  pointer to the root node of the tree to count the number of leaves
*
*Return: number of leaves and return 0 if tree is NULL
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
