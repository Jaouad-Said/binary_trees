#include "binary_trees.h"

int recursive_full_check(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node.
 * Return: 1 if the tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t is_full, is_balanced;

    if (tree == NULL)
    {
        return (0);
    }

    is_full = binary_tree_is_full(tree) ? 1 : 0;
    is_balanced = binary_tree_balance(tree) == 0 ? 1 : 0;

    return (is_full && is_balanced ? 1 : 0);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node.
 * Return: 1 if the tree is full, otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }

    return (recursive_full_check(tree));
}

/**
 * recursive_full_check - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node.
 * Return: 1 if the tree is full, otherwise 0.
 */
int recursive_full_check(const binary_tree_t *tree)
{
    if (tree != NULL)
    {
        if ((tree->left != NULL && tree->right == NULL) ||
            (tree->left == NULL && tree->right != NULL) ||
            recursive_full_check(tree->left) == 0 ||
            recursive_full_check(tree->right) == 0)
            return (0);
    }
    return (1);
}

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: The balance factor of the tree or 0 if the tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree)
    {
        return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
    }
    return (0);
}

/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: The height of the tree or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree)
    {
        size_t left_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
        size_t right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;
        return ((left_height > right_height) ? left_height : right_height);
    }
    return (0);
}
