#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Entry point.
 *@tree:the tree to be measured
 * Return: signed int
 */
/**
 *max- finds maximum
 *@x:an int
 *@y:an int
 * Return: signed int
 */
int max(int x, int y)
{
	if (x > y)
	{
		return (x);
	}
	else
	{
		return (y);
	}
}
size_t binary_tree_height(const binary_tree_t *tree)
{
	int a;

	if (tree == NULL)
	{
		return (0);
	}
	a = max(binary_tree_height(tree->left), binary_tree_height(tree->right));
	return (a + 1);
}
