#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the number node
 * @head: Pointer
 * @index: Index of the node
 * Return: Pointer to the number of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return current;

		current = current->next;
		count++;
	}

	return (NULL);
}
