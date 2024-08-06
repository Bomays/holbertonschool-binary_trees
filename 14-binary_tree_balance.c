#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: return 0 if tree is NULL, if not returns the balance factor of it
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height, bal_factor;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	bal_factor = left_height - right_height;

	{
		return (bal_factor);
	}
}

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

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height > right_height ? left_height + 1 : right_height + 1);
}
