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
    int flag = 0; // Flag to indicate if a NULL node is encountered
    binary_tree_t *queue[1024] = {NULL}; // Queue for level-order traversal
    int front = 0, rear = 0; // Pointers for front and rear of the queue

    if (!tree) // If tree is NULL, it's not complete
        return (0);

    queue[rear++] = (binary_tree_t *)tree; // Enqueue the root

    while (front < rear)
    {
        binary_tree_t *current = queue[front++]; // Dequeue the front node

        if (current)
        {
            if (flag)
                return (0); // If a NULL node was encountered previously, return 0

            queue[rear++] = current->left; // Enqueue left child
            queue[rear++] = current->right; // Enqueue right child
        }
        else
            flag = 1; // Set flag to indicate a NULL node was encountered
    }

    return (1); // If no issues, the tree is complete
}

