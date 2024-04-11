#include "binary_trees.h"

/**
 * binary_tree_insert_right- inserts a new node to the right of a node
 * @parent: is the pointer to the node to insert
 * @value: is the value to be stored in the node
 *
 * Return: a pointer to the node otherwise NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new_node->right = parent_right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (NULL);
}
