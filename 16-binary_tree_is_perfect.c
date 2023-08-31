#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t level = 0;

	while (tree != NULL)
	{
		if ((tree->left == NULL && tree->right != NULL) ||
		    (tree->left != NULL && tree->right == NULL))
			return (0);

		if (level == height - 1 && (tree->left != NULL || tree->right != NULL))
			return (0);

		if (level < height - 1 && (tree->left == NULL || tree->right == NULL))
			return (0);

		tree = tree->left;
		level++;
	}

	return (1);
}
