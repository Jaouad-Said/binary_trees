#include "binary_trees.h"
/**
 * binary_tree_insert_right - func that inserts a node as the right-child
 * @parent: Pointer to the parent node
 * @value: Integer stored in the node
 * Return: Pointer to the newly created node or NULL if unsuccessful
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
