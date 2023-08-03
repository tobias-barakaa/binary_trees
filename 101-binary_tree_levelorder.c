#include "binary_trees.h"

/**
 * heightt - Determines the height of a binary tree
 *
 * @tree: Tree root
 * Return: Height of the tree
 */
size_t heightt(const binary_tree_t *tree)
{
    size_t left = 0;
    size_t right = 0;

    if (tree == NULL)
    {
        return (0);
    }

    left = heightt(tree->left);
    right = heightt(tree->right);

    if (left > right)
    {
        return (left + 1); // Return the height of the left subtree + 1
    }

    return (right + 1); // Return the height of the right subtree + 1
}

/**
 * node_execute_same_line - Prints nodes at the same level
 *
 * @tree: Tree root
 * @select: Level of nodes to print
 * @func: Pointer to a function
 * Return: No return
 */
void node_execute_same_line(const binary_tree_t *tree, int select, void (*func)(int))
{
    if (tree == NULL)
    {
        return;
    }

    if (select == 1)
    {
        func(tree->n); /* Call the given function on the value of the current node */
    }
    else if (select > 1)
    {
        // Recursively call the function for left and right subtrees at the next level
        node_execute_same_line(tree->left, select - 1, func);
        node_execute_same_line(tree->right, select - 1, func);
    }
}

/**
 * binary_tree_levelorder - Traverse binary tree level by level
 * @tree: Root of the tree to traverse
 * @func: Pointer to a function to call for each node's value
 * Return: No return
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    size_t height;
    size_t key;

    if (tree == NULL || func == NULL)
    {
        return;
    }

    height = heightt(tree); /* Get the height of the tree */

    for (key = 1; key <= height; key++)
    {
        /* Call the function for nodes at the current level*/
        node_execute_same_line(tree, key, func);
    }
}

