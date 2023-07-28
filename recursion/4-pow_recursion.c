#include"main.h"
#include<stdio.h>
/**
 * _pow_recursion - eturns the value of x raised to the power of y.
 * @x: variable
 * @y: variable
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y < 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
