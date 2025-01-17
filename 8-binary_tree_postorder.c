#include "binary_trees.h"

/**
 * binary_tree_postorder - Entry point
 * @tree: pointer to the root node
 * @func: pointer to a function
 * Return: Always 0
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
