#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add note at the end
 * @head: pointer
 * @str:string
 * Return:node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *aux = *head;
	if (str == NULL)
	return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
	return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	aux = *head;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = node;
	return(node);
}
