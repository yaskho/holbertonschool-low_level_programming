#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse.
 * @s: checking string
*/

void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	while (length > 0)
	{
		_putchar(*s);
		s--;
		length--;
	}

	_putchar('\n');
}
