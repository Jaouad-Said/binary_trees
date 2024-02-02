#include "binary_trees.h"
/**
 * binary_tree_node - Creates a new binary tree node.
 * @parent: A pointer to the parent node of the new node.
 * @value: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly created binary tree node, or NULL if memory allocation fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
