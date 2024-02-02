#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * @tree: the pointer to the root node
 * Return: number of nodes
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
