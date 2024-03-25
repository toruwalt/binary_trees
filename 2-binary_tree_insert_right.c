#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that creates a binary tree node
 * @parent: The parent node
 * @value: The value of node
 * Return: A tree
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(binary_tree_t));
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
		parent->right = newNode;
	}
	else
		parent->right = newNode;
	return (newNode);
}
