#include<stdlib.h>
#include<string.h>
#include "main.h"
/**
 * _strdup - function of string
 * @str: string
 * @c: char
 * Return: c
*/
char *_strdup(char *str)
{
	if (str == 0)
		return (NULL);
	char *c = (char *)malloc(strlen(str) + 1);
	if (c == NULL)
		return (NULL);
	strcpy (c, str);
	return (c);
}
