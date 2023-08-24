#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - function to concatonate
 *@s1: string
 *@s2: string
 *@n: integer
 *Return: to return the concatonation 
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len_s1;
    unsigned int len_s2;
    char *concatenated;
    unsigned int i;
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len_s1 = 0;
    len_s2 = 0;

    while (s1[len_s1])
        len_s1++;
    while (s2[len_s2])
        len_s2++;

    if (n >= len_s2)
        n = len_s2;

    concatenated = malloc(sizeof(char) * (len_s1 + n + 1));
    if (concatenated == NULL)
        return NULL;

    for (i = 0; i < len_s1; i++)
        concatenated[i] = s1[i];
    for (i = 0; i < n; i++)
        concatenated[len_s1 + i] = s2[i];
    concatenated[len_s1 + n] = '\0';

    return concatenated;
}
