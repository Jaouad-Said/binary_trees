#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a binary tree node.
 * @node: A pointer to the node.
 * Return: A pointer to the sibling node, or NULL if no sibling or parent is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
    {
        return (NULL);
    }

    if (node->parent->left == node)
    {
        return (node->parent->right);
    }

    return (node->parent->left);
}
