#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/** max - finds maximum
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
/**
 * binary_tree_height - Entry point.
 *@tree:the tree to be measured
 * Return: signed int
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int a;
	int leftheight;
	int rightheight;

	if (!tree)
	{
		return (-1);
	}
	leftheight = binary_tree_height(tree->left);
	rightheight=binary_tree_height(tree->right);
	a = max(leftheight,rightheight);
	return (a + 1);
}
