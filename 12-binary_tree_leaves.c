#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves of a binary tree.
 * @tree: A pointer to the root node.
 * Return: The number of leaves or 0 if the tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (tree->left == NULL && tree->right == NULL) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
