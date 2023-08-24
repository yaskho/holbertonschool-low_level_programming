#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function to search a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the bytes to search for.
 * Return: A pointer to the first occurrence of a byte in @s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
