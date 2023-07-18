#include "main.h"
/**
 *print_triangle - function that prints a triangle
 *size: the character to be checked
 *Return: always 0
*/
void print_triangle(int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
}
