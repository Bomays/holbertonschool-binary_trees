#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node for a binary tree
 * @parent: Pointer to the parent node of the new node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly created node,
 *	   or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(struct binary_tree_s));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);

}
