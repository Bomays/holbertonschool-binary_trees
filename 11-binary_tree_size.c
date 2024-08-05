#include <stdlib.h>
#include <stdio.h>
<<<<<<< HEAD
#include "binary_trees.h"                                                                                                                                                                                           /**                                                                                                        * binary_tree_size - function that measures the size of a binary tree
 *                                                                                                         * @tree: pointer to the root node of the tree to measur the size
 *                                                                                                         * Return: return 0 if tree is NULL or return the size of the tree if succeeded
=======
#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measur the size
 *
 * Return: return 0 if tree is NULL or return the size of the tree if succeeded
>>>>>>> a8b1f96 (added tasks 9, 10, 11 compiled 'binary tree Sizeheight/depth/height', updated header library in tasks 0,1,2 files & put all prototypes in header file)
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
<<<<<<< HEAD
        if (tree == NULL)
        {
                return (0);
        }

	return (binary_tree_size(tree->right) + binary_tree_size(tree->left)+1);
=======
	if (tree == NULL)
	{
		return (0);
	}
	return (binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1);
}
>>>>>>> a8b1f96 (added tasks 9, 10, 11 compiled 'binary tree Sizeheight/depth/height', updated header library in tasks 0,1,2 files & put all prototypes in header file)
