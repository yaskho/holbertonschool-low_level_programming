#include <stdlib.h>
#include "main.h"
/**
 *creat_array - function to creat array
 * @c: char
 * @array: tab
 * Return: return array
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
			return (array);
}
