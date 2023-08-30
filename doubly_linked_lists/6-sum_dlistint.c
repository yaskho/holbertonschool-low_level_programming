#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum
 * @head: Pointer
 * Return: Sum of all data values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
