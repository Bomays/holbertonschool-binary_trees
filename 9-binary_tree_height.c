#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: return 0 if tree is NULL
 * or return the height of the tree if succeeded
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = (tree->left) ? binary_tree_height(tree->left) + 1 : 0;
	right_height = (tree->right) ? binary_tree_height(tree->right) + 1 : 0;

	return (left_height > right_height ? left_height : right_height);
}
