#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if tree is perfect, 0 otherwise or if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    if (left_height == right_height)
    {
        if (binary_tree_is_perfect(tree->left) &&
            binary_tree_is_perfect(tree->right))
            return (1);
    }

    return (0);
}
