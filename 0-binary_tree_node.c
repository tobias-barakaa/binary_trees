#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_node - Function that creates a node in a binary tree structure
 *
 * @parent: Pointer to the parent node
 * @value: Value to insert in the desired node
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode;

	(void) (*newnode);
	(void) (value);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

return (newnode);

}
