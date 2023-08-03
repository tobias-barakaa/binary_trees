#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Perform a right-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the new root node of the tree after rotation
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *new;
if (!tree || !tree->left)
return (tree);

new = tree->left;
tree->left = new->right;
if (new->right)
new->right->parent = tree;

new->parent = tree->parent;
tree->parent = new;
new->right = tree;
return (new);
}
