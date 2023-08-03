#include "binary_trees.h"

/**
 * binary_tree_height - determines the height of binary tree
 *
 * @tree: pointer to the node tree
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t lh_node, rh_node;

    if (tree == NULL)
    {
        return (0);
    }

    lh_node = binary_tree_height(tree->left);
    rh_node = binary_tree_height(tree->right);
    if (lh_node > rh_node)
       return (lh_node) + 1;
    else
    {
     return (rh_node) + 1;
    }
}
