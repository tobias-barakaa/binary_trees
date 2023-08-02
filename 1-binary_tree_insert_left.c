#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_left - Function that inserts a node as the left-child
 * of another node
 *
 * @parent: Pointer to parent of node to create
 * @value: Value to insert in the desired node
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode;
	binary_tree_t *temp;

	(void) (*newnode);
	(void) (value);

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = newnode;
		newnode->parent = parent;
	}
	else
	{
		temp = parent->left;
		parent->left = newnode;
		newnode->left = temp;
		newnode->parent = parent;
		temp->parent = newnode;

	}

return (newnode);

}
