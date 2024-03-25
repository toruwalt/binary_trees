#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that creates a binary tree node
 * @parent: The parent node
 * @value: The value of node
 * Return: A tree
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
		parent->left = newNode;
	}
	else
		parent->left = newNode;
	return (newNode);
}
