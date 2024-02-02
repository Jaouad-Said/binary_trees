#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using postorder traversal.
 * @tree: A pointer to the root node.
 * @func: A function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	int value;

	if (tree == NULL || func == NULL)
		return;
	value = tree->n;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(value);
}
