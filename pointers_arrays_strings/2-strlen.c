#include "main.h"
/**
*_strlen - function that returns the length of a string.
*@s:char to check with
*Return: always 0
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}