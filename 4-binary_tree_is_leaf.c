#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf- Entry point
 *@node:node to be verified
 * Return: Always int
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
	{
		return (0);
	}
	else
		return (1);
}
