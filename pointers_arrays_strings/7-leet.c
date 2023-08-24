#include "main.h"
/**
 * leet - function to leet
 * @str: string
 * Return: to return the string
*/

char *leet(char *str)
{
	int i;
	char *ptr = str;
	char leet_map[5][2] = {
		{'a', '4'}, {'e', '3'}, {'o', '0'}, {'t', '7'}, {'l', '1'}
	};

	while (*ptr)
	{
		for (i = 0; i < 5; i++)
		{
			if (*ptr == leet_map[i][0] || *ptr == leet_map[i][0] - 32)
			{
				*ptr = leet_map[i][1];
				break;
			}
		}

		ptr++;
	}

	return (str);
}
