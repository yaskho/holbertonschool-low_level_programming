#include "main.h"
/**
 * puts -  function that prints every other character of a string
 * str: string to check
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
