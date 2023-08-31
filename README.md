
# Binary Trees

This repository contains a set of C functions that operate on binary trees. These functions are designed to perform various operations on binary trees, such as creating nodes, inserting nodes as children, deleting trees, checking if a node is a leaf, measuring tree height and depth, checking for a perfect binary tree, and finding a node's uncle.


## Documentation

A binary tree is a hierarchical data structure used in computer science to organize and store data efficiently. It consists of nodes, where each node has two children at most: a left child and a right child. The topmost node in a binary tree is called the root, and nodes without children are referred to as leaf nodes.

In simple terms, imagine it like a branching structure, somewhat like an upside-down tree where each node has two branches leading to its children. Nodes can contain data (values, keys, or other information), and the structure allows for efficient searching, insertion, and deletion of data.

Binary trees are commonly used in various algorithms and applications, such as in search trees, sorting algorithms, and data storage systems. Different variations of binary trees, like binary search trees, AVL trees, and heaps, provide specific advantages for different types of operations and use cases.
## Usage/Examples
To use these functions, you need to include the provided `binary_trees.h` header file in your C program. Make sure to compile the program with the associated source files.


Here's an example of how to use the `binary_tree_height` function
```c
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Height of the tree, or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}

 ```
```c
❯ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 9-binary_tree_height.c 9-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 9-height
❯ ./9-height 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Height from 98: 2
Height from 128: 1
Height from 54: 0                                                                    at 12:43:39
❯ 
```

## Contributing

`Contributions are always welcome!`

Contributions to this repository are welcome. If you find any issues, have suggestions for improvements, or want to add more functions, feel free to create pull requests.

