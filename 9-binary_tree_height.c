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

    lh_node = binary_tree_height(tree->left) + 1;
    rh_node = binary_tree_height(tree->right) + 1;
    if (lh_node > rh_node)
       return (lh_node);
    else
    {
     return (rh_node);
    }
}
