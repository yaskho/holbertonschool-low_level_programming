#include "main.h"
/**
 * string_toupper - function to change type
 * @str: string
 * Return: to return string changed
*/

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}
