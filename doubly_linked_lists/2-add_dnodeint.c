#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Add a new node
 * @head: pointer
 * @n: value
 * Return: return the adress
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return NULL;

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head != NULL)
		(*head)->prev = node;

	*head = node;

	return (node);
}
