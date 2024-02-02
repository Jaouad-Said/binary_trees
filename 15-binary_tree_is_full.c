#include "binary_trees.h"
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
