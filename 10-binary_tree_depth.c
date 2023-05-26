#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - finds depth of a tree
 *@tree:root node
 * Return: Always 0 (Success)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree || !tree->parent)
	{
		return (0);
	}
	d = binary_tree_depth(tree->parent);
	return (d + 1);
}
