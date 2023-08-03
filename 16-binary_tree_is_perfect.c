#include "binary_trees.h"

/**
*binary_tree_is_perfect - checks if a binary tree is perfect
*@tree: a pointer to the root node of the tree to check
*
*Return: 1 if tree is perfect  or 0 if tree is NULL
*
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)_pow_recursion(2, height + 1);
		return (power - 1 == nodes);
}


/**
*_pow_recursion - return value of i raised to the power of j
*@i: the base value to be exponentiated
*@j: the poer to raise x to
*
*Return: i to the power of j or -1 if j is negative value
*/
int _pow_recursion(int i, int j)
{
	if (j  < 0)
		return (-1);
	if (j == 0)
		return (1);
	else
		return (i * _pow_recursion(i, j - 1));
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
