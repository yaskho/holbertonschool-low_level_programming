#include "main.h"
/**
 * puts_half - function that prints half of a string.
 * @str : string to check
*/

void puts_half(char *str)
{
	int length = 0, i, start_index;

	while (str[length] != '\0')
	{
		length++;
	}

	start_index = ((length - 1) / 2) + 1;

	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
