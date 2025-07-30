#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_height - func
 * @tree: arg
 * Return: size
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftHeight, rightHeight;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (0);
leftHeight = binary_tree_height(tree->left);
rightHeight = binary_tree_height(tree->right);
return (1 + (leftHeight > rightHeight ? leftHeight : rightHeight));
}

