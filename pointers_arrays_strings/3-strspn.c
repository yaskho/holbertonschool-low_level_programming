#include "main.h"

/**
 * _strspn - function to Get the length of a prefix substring.
 * @s: Pointer to the string to check.
 * @accept: Pointer to the string containing the accepted bytes.
 * Return: The number of bytes in the initial segment of @s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
			break;
	}

	return (count);
}
