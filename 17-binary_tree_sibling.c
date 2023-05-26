#include "binary_trees.h"
/**
 *binary_tree_sibling- sees if tree is mirrored
 *@node:root node
 * Return: int
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
