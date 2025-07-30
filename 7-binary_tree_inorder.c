#include "binary_trees.h"
#include <stdlib.h>
/**
 *
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
func(tree->n);
tree->parent;
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
