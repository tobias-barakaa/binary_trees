#include "binary_trees.h"

/**
*binary_tree_uncle - finds the uncle of a node
*@node: is a pointer to the node to find the uncle
*
*Return: a pointer to the uncle node
*	NULL if node is NULL
*	NULL if node has no uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
*binary_tree_sibling -  finds the sibling of a node
*@node: is a pointer to the node to find the sibling
*Return: NULL if node is NULL and NULL if parent is NULL
*	NULL if node has mo siblings
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
