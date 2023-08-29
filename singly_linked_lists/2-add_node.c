#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a node
 * @head: pointer to a pointer
 * @str: string
 * Return: to return the adress
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	if (str == NULL)
		return (NULL);
	node = (list_t *) malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
