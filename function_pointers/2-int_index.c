#include <function_pointers.h>

/**
*int_index - return an index
*@array: the array  to search in
*@size: array's size
*@cmp: function to compare
*Return: indexx
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
