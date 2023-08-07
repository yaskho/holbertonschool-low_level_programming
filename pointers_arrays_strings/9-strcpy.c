#include "main.h"
/**
 * *_strcpy -  function that copies the string pointed to by src.
 * @src: char to check
 * Return: to return the function
*/

char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
