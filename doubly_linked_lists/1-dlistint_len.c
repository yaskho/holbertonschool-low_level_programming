#include "lists.h"
/**
 * dlistint_len - function that return number of elements
 * @h: pointer
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t t = 0;
	while (h != NULL)
	{
		t++;
		h = h->next;
	}
	return(t);
}
