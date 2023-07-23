#include "main.h"
/**
*print_line -  function that draws a straight line in the terminal.
/*@n: _
*Return: for putchar
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	_putchar('\n');
}
