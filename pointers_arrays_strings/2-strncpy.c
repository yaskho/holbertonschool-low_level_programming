#include "main.h"
/**
 *_strncpy - function to copy string
 *Return: to return the result
 * @dest: char
 * @src: char
 * @n: variable
*/

char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return (dest);
}
