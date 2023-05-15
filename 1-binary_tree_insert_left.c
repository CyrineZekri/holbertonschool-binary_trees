#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 *binary_tree_insert_left - inserts a node.
 *@parent: parent of the node
 *@value: value of the node.
 *Return: pointer tio the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (!parent)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->right = NULL;
	newnode->left = parent->left;
	parent->left = newnode;
	newnode->parent = parent;
	if (newnode->left)
	{
		newnode->left->parent = newnode;
	}
	return (newnode);
}
