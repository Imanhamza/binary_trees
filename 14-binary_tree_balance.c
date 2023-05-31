#include "binary_trees.h"
int get_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - a function that measures
 * the balance factor of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: balance factor or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftH,
	    rightH,
	    balance;

	if (tree == NULL)
		return (0);

	leftH = get_tree_height(tree->left);
	rightH = get_tree_height(tree->right);
	balance = leftH - rightH;

	return (balance);
}
/**
 * get_tree_height - calculates the height of a binary tree recursively
 * @tree: a pointer to the root to clauculate the height
 *
 * Return: The height of the tree or -1 when NULL
 */
int get_tree_height(const binary_tree_t *tree)
{
	int leftH,
	    rightH,
	    height;

	if (tree == NULL)
		return (-1);
	leftH = get_tree_height(tree->left);
	rightH = get_tree_height(tree->right);

	height = 1 + (leftH > rightH ? leftH : rightH);

	return (height);
}
