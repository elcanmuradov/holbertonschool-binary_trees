#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_is_leaf - funct
 * @node: arg1
 * Return: 0 or 1
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
if (node->left == NULL && node->right == NULL)
{
return (1);
}
else
{
return (0);
}
}
