#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 *
 * @tree: pointer to the node of the tree to count the number of nodes
 *
 * Return: returns 0 if the tree is NULL,
 * returns 1 for nodes confirmed with at east 1 child,
 * returns the number of these nodes
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	else
	{
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
}
