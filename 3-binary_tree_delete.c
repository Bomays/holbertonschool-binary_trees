#include "binary_trees.h"

/**
 * binary_tree_delete - Entry point
 * @tree: pointer to the root node of the tree to delete
 * Return: always 0
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
