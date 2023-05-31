#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth
 * of a node in a binary tree
 *
 * @tree: a pointer to the node to measure the depth
 * Return: size of the tree and 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* start a default size, set the current node */
	size_t depth = 0;
	const binary_tree_t *current;

	if (tree == NULL)
		return (0);

	/* check if the node has a parent till NULL */
	current = tree;
	while (current->parent != NULL)
	{
		depth++;
		/* update the current node to te current parent */
		current = current->parent;
	}
	return (depth);
}
