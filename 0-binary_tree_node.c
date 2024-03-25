#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - A function that creates a binary tree node
 * @parent: The parent node
 * @value: The value of node
 * Return: A tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = malloc(sizeof(binary_tree_t));
	newNode->n = value;
	if (parent == NULL)
		newNode->parent = NULL;
	else
		newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
