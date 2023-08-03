#include "binary_trees.h"

/**
 * binary_tree_is_complete - Check if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 *
 * This function checks whether a binary tree is complete or not. A binary tree
 * is considered complete if all levels are fully filled except possibly the
 * last level, which is filled from left to right.
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    binary_tree_t *queue[1024] = {NULL};
    int front = 0, rear = 0;
    int flag = 0;

    queue[rear++] = (binary_tree_t *)tree;

    while (front < rear)
    {
        binary_tree_t *current = queue[front++];

        if (current)
        {
            if (flag)
                return (0);

            queue[rear++] = current->left;
            queue[rear++] = current->right;
        }
        else
            flag = 1;
    }

    return (1);
}

