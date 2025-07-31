#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

return (left_height > right_height ? left_height : right_height);
}

/**
 * is_perfect_recursive - helper function to check if tree is perfect
 * @tree: pointer to the root node
 * @depth: current depth
 * @level: expected leaf level
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, int depth, int level)
{
if (tree == NULL)
return (1);

if (tree->left == NULL && tree->right == NULL)
return (depth == level);

if (tree->left == NULL || tree->right == NULL)
return (0);

return (is_perfect_recursive(tree->left, depth + 1, level) &&
is_perfect_recursive(tree->right, depth + 1, level));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int level;

if (tree == NULL)
return (0);

level = (int)binary_tree_height(tree);
return (is_perfect_recursive(tree, 0, level));
}
