#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a given string
 * @s: the given string to calculate its length
 * Return: 0 or length of the string 
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
