#include "binary_trees.h"

/**
 * binary_tree_height - function to perform height of a tree.
 * @tree: Pointer node that determines height.
 * Return: The height(binary-tree)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t l_height_node, r_height_node;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	l_height_node = binary_tree_height(tree->left);
	r_height_node = binary_tree_height(tree->right);
		return ((l_height_node > r_height_node ? l_height_node : r_height_node) + 1);
}

