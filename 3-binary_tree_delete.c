#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: a pointer to the tree to be deleted
 *
 * Return: NULL if the tree is empty otherwise successful
 */


void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}

