#include <stddef.h>
#include "lists.h"
/**
 * list_len - number a element
 * @h: pointer
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
