#include "main.h"
/**
*print_square - function that prints a square, followed by a new line.
*Return: to function
*size: char to check with
*/

void print_square(int size)
{
		int i, j;
{
	for (i = 0; i < size; i++)
	{

		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

}