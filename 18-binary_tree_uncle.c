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
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;

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

/**
 * binary_tree_uncle - function that finds the uncle of a node
 *
 * @node: the node we have to find its uncle
 *
 * Return: return NULL if the node is NULL and if it has no uncle either.
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	return (binary_tree_sibling(parent));
}
