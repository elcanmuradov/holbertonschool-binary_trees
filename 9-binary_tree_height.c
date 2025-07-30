#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - func
 * @tree: arg
 * @Return: size
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
if (root == NULL) {
return (-1);
}    
int leftHeight = height(root->left);
int rightHeight = height(root->right);    
return (1 + (leftHeight > rightHeight ? leftHeight : rightHeight));
}
