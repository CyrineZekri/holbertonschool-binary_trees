#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 *binary_tree_insert_delete - deletes a binary tree.
 *@tree: root of the tree.
 *Return: voio.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    binary_tree_t *tmp = NULL;
    if (!tree)
    {
        return;
    }
    tmp = malloc(sizeof(binary_tree_t));
    tmp = tree;
    while (tmp->left)
    {
        tmp = tmp->left;
    }

    while (tmp)
    {

        free(tmp->left);
        free(tmp->right);
        free(tmp->parent);
    }
    free(tmp);
}