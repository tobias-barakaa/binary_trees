#include "binary_trees.h"

/**
 * binary_tree_size - size of binary
 *
 * @tree: tree root
 * Return: size
 */
size_t size(const binary_tree_t *tree)
{
	if (tree == NULL)
     {
		return (0);
     }

	return (size(tree->left) + size(tree->right) + 1);
}

/**
 * comp_tree - determines binary completion
 *
 * @tree: pointer 
 * @key: index
 * @elem_num: element count(number)
 * Return:Null 
 */
int comp_tree(const binary_tree_t *tree, int key, int elem_num)
{
	if (tree == NULL)
     {
		return (1);
     }

	if (key >= elem_num)
     {
		return (0);
     }

	return (comp_tree(tree->left, (2 * key) + 1, elem_num) &&
		comp_tree(tree->right, (2 * key) + 2, elem_num));
}


/**
 * binary_tree_is_complete - function tree complete
 *
 * @tree:  root
 * Return: Null
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
     {
		return (0);
     }

	return (comp_tree(tree, 0, size(tree)));
}
