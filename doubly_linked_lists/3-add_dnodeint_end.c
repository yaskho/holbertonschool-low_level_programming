#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end
 * @head: Pointer to a pointer to the head
 * @n: Value
 * Return: Address of the new element,
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *c = *head;

	if (node == NULL)
		return NULL;

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		while (c->next != NULL)
			c = c->next;

		c->next = node;
		node->prev = c;
	}

	return (node);
}