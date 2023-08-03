#include "binary_trees.h"

/**
*bst_search - searches for a value in a Binary Search Tree
*@tree: is a pointer to the root node of the BST to search
*@value: is the value to search in the tree
*
*Return: a pointer to the node containing a value equals to value
*	NULL If tree is NULL or if nothing is found
*
*/

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = (bst_t *)tree;

	if (tree == NULL)
		return (NULL);

	while (node)
	{
		if (value == node->n)
			return (node);
		if (value < node->n)
			node = node->left;
		else if (value > node->n)
			node = node->right;
	}
	return (NULL);
}
