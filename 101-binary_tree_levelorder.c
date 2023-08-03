/**
 * binary_tree_levelorder - Traverse a binary tree using level-order traversal
 *
 * This function performs a level-order traversal of a binary tree. It starts
 * from the root node and visits each level of the tree before moving to the next
 * level. The given function is called for each visited node, and the value of
 * the node is passed as a parameter to the function.
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node's value
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    // Check if either the tree pointer or the func pointer is NULL
    if (tree == NULL || func == NULL)
        return; // If either is NULL, return immediately, as traversal cannot proceed.

    /* Create a queue for level-order traversal */

    // Allocate memory for a queue to store the nodes during traversal.
    // The queue is implemented as an array of pointers to binary_tree_t nodes.
    // In this code, the queue has a fixed size of 1024, which limits the number
    // of nodes that can be traversed in a single level-order traversal.
    binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1024);
    if (queue == NULL)
        return; // Return if memory allocation fails.

    int front = 0, rear = 0; // Initialize variables to keep track of the front and rear ends of the queue.

    queue[rear++] = (binary_tree_t *)tree; // Enqueue the root node into the queue.

    // Start the level-order traversal using a while loop.
    // The traversal continues as long as there are nodes in the queue to be processed.
    while (front < rear)
    {
        // Dequeue the front node from the queue for processing.
        binary_tree_t *current = queue[front++];
        
        // Call the given function (func) with the value (n) of the current node.
        func(current->n);

        // Check if the current node has a left child.
        if (current->left)
            // If it has a left child, enqueue the left child into the queue and increment rear.
            queue[rear++] = current->left;

        // Check if the current node has a right child.
        if (current->right)
            // If it has a right child, enqueue the right child into the queue and increment rear.
            queue[rear++] = current->right;
    }

    // Free the memory allocated for the queue using free(queue).
    free(queue);
}

