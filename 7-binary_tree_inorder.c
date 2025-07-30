#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - func
 * @tree - arg1
 * @func - arg2
 * Return: 1 or 0
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_preorder(tree->left, func);
func(tree->n)
binary_tree_preorder(tree->right, func);
}
