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
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}

/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: return 0 if tree is NULL or return the size of the tree if succeeded
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1);
}

/**
 * binary_tree_is_perfect - function that checks if binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: return 0 if tree is NULL, or return 1 if the tree is perfect
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	int height = binary_tree_height(tree);
	int size = binary_tree_size(tree);

	return (size == (1 << height) - 1);
	/**2^height of tree -1*/
}
