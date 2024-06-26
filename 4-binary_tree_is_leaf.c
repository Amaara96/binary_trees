#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks node for leaf
 * @node: node to check
 *
 * Return: 1, 0 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
