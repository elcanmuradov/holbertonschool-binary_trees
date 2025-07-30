#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_height - func
 * @tree: arg
 * @Return: size
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
int leftHeight = binary_tree_height(tree->left);
int rightHeight = binary_tree_height(tree->right);

if (tree == NULL) {
return (-1);
}    
return (1 + (leftHeight > rightHeight ? leftHeight : rightHeight));
}
