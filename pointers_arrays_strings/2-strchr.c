#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to search.
 * @c: Character to find.
 * Return: Pointer to the first occurrence of the character @c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
