#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints element
 * @h: pointer
 * Return: number
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;
	while (h != NULL)
{
	printf("%d\n", h->n);
	h = h->next;
	s++;
}
	return (s);
}
