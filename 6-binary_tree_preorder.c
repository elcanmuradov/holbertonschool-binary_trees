#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - funct
 * @tree: arg1
 * @func: arg2
 * Return: 0 or 1
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
