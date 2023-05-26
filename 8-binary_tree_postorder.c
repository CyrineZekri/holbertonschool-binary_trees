#include "binary_trees.h"
/**
 * binary_tree_inorder- inorder traversal
 *@tree: root node
 *@func:function pointer
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, (*func));
	binary_tree_postorder(tree->right, (*func));
	func(tree->n);
}
