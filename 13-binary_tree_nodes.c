#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes in a binary tree that have at least one child.
 * @tree: A pointer to the root node.
 * Return: The number of nodes with at least one child, or 0 if the tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child_nodes = 0;

	if (tree)
	{
		child_nodes += (tree->left != NULL || tree->right != NULL) ? 1 : 0;
		child_nodes += binary_tree_nodes(tree->left);
		child_nodes += binary_tree_nodes(tree->right);
	}
	return (child_nodes);
}
