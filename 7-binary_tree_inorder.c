#include "binary_trees.h"

/**
 * binary_tree_inorder - a function that goes through
 * a binary tree using in-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* recursively traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* Call the fuction to the current node */
	func(tree->n);

	/* recursively traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
