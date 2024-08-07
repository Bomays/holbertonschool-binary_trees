#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 *
 * @node: the node we have to find the sibling
 *
 * Return: returns NULL if the node is NULL or the parent either.
 * returns NULL also if node has no sibling.
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *parent = node->parent;

	if (parent->left == node)
	{
		return (parent->right);
	}

	else if (parent->right == node)
	{
		return (parent->left);
	}

	return (NULL);
}
