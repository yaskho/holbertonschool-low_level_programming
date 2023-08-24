#include "main.h"
/**
 * cap_string - function to capitalize the words
 * Return: to return the changed words
 * 
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr)
	{
		if ((*ptr >= 'a' && *ptr <= 'z') && capitalize_next)
		{
			*ptr = *ptr - ('a' - 'A');
			capitalize_next = 0;
		}
		else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
				 *ptr == ',' || *ptr == ';' || *ptr == '.' ||
				 *ptr == '!' || *ptr == '?' || *ptr == '"' ||
				 *ptr == '(' || *ptr == ')' || *ptr == '{' ||
				 *ptr == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}

		ptr++;
	}

	return (str);
}
