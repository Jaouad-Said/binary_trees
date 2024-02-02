#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a new node as the left child of a given parent.
 * @parent: A pointer to the parent node.
 * @value: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL if unsuccessful.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
