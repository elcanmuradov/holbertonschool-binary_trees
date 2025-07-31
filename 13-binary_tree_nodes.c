#include "binary_trees.h"

/**
 * binary_trees_nodes - funct
 * @tree: arg1
 * Return: nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL || tree->parent == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
