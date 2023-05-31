#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height.
 * Return: The height of the tree or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	/* set a var for right and left heights */
	size_t leftH,
	       rightH,
	       height;

	if (tree == NULL)
		return (0);

	/* set the values for each height */
	leftH = binary_tree_height(tree->left);
	rightH = binary_tree_height(tree->right);

	/* find the maximum height*/
	height = 1 + (leftH > rightH ? leftH : rightH);

	return (height);
}
