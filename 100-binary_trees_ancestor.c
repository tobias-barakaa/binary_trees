#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes
 * @first: First node
 * @second: Second node
 *
 * This function finds and returns the (LCA) of two nodes
 * in a binary tree. If no common ancestor is found, it returns NULL.
 *
 * Return: Pointer to the lowest common ancestor node, or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
const binary_tree_t *p, *q;

if (!first || !second)
return (NULL);

/** Store the paths from root to each node**/
binary_tree_t *path1[1024] = {NULL};
binary_tree_t *path2[1024] = {NULL};

size_t len1 = 0, len2 = 0;

/** Traverse from first node to root and store the path**/
for (p = first; p; p = p->parent)
path1[len1++] = (binary_tree_t *)p;

/**Traverse from second node to root and store the path**/
for (q = second; q; q = q->parent)
path2[len2++] = (binary_tree_t *)q;

/** Find the common ancestor by comparing the paths**/
binary_tree_t *ancestor = NULL;
for (size_t i = 0; i < len1 && i < len2; ++i)
{
if (path1[len1 - 1 - i] == path2[len2 - 1 - i])
ancestor = path1[len1 - 1 - i];
else
break;
}

return (ancestor);
}
