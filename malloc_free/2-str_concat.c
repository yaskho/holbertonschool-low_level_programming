#include<stdlib.h>
#include<string.h>
#include "main.h"

/**
 * str_concat - function to concatonate
 * @c: char
 * @s1: string
 * @s2: string
 * Return: c
*/
char *str_concat(char *s1, char *s2)

{
	char *c;
	if (s1 == NULL)
		s1 = NULL;
	if (s2 == NULL)
		s2 = NULL;
	c = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (c == NULL)
		c = NULL;
	strcpy (c, s1);
	strcat (c, s2);
	return (c);
}
