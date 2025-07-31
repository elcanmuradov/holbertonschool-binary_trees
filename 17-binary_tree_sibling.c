#include "binary_trees.h"

/**
 * binary_tree_sibling - funct
 * @node: arg
 * Return: sibling or NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);

if (node->parent->left == NULL || node->parent->right == NULL)
return (NULL);

if (node->parent->left != NULL && node->parent->left != node)
return (node);

if (node->parent->right != NULL && node->parent->right != node)
return (node->parent->right);
}
