#include "main.h"
#include <stddef.h>
/**
 * _strstr - function to Locate a substring in a string.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the substring to find.
 * Return: A pointer to the first occurrence of @needle in @haystack
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (!needle[j])
			return (haystack + i);
	}

	return (NULL);
}
