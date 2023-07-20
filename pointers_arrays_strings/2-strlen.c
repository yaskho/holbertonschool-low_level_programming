#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s:char to check with
 * Return :0 always 
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return length;
}