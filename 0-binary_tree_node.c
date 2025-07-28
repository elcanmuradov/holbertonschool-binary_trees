#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
struct binary_tree_s* createNode(int value)
struct binary_tree_s* newNode = (struct binary_tree_s*)malloc(sizeof(struct binary_tree_s));
if (newNode == NULL)
{
return (NULL);
}
newNode->data = value;
newNode->left = NULL;
newNode->right = NULL;
return (newNode);
}
