#include "binary_trees.h"
/**
 * binary_tree_height -  height of a binary tree
 * @tree:   the root node
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t letf_hight = 0, right_hight = 0;

	if (!tree)
		return (0);

	letf_hight = binary_tree_height(tree->left);
	right_hight = binary_tree_height(tree->right);

	if (letf_hight >= right_hight)
		return (letf_hight + 1);
	return (right_hight + 1);
}
/**
 * binary_tree_balance- finds if a lead
 *@tree:root node
 * Return: Always 0 (Success)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int letf_hight = 0, right_hight = 0;

	if (!tree)
		return (0);

	if (!tree)
		return (0);

	letf_hight = binary_tree_height(tree->left);
	right_hight = binary_tree_height(tree->right);

	return (letf_hight - right_hight);
}
