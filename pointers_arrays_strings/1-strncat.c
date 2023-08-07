#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (n > 0 && *src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	*dest_ptr = '\0';

	return dest;
}