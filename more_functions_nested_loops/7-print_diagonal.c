#include "main.h"
/**
 *void print_diagonal - function that draws a diagonal line on the terminal.
 *n: char to check
 *Return: to function 
*/

void print_diagonal(int n)
{
		int i, j;
	for (i = 0; i < n; i++)
	{

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

	if (n <= 0)
		{
			_putchar('\n');

			return;
		}

		_putchar('\\');
		_putchar('\n');
	}


}