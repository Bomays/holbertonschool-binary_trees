#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: return 0 if tree is NULL, return 1 when a leave is confirmed
 * or return the number of leaves of the tree if succeeded
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
}
