#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: the root node
 *
 * Return: binsary tree
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;
	if (parent->left == node)
		return (parent->right);
	return (parent->left);
}
/**
 *binary_tree_uncle- searches for uncle
 *@node:root node
 * Return: int
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (node && node->parent)
	{
		parent = node->parent;
		if (parent->left == node || parent->right == node)
			return (binary_tree_sibling(parent));
	}
	return (NULL);
}
