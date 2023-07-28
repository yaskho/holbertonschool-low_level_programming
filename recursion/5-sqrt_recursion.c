#include "main.h"
#include<stdio.h>

/**
 * sqrt_helper - Recursive helper function.
 * @n: The number to find the square root.
 * @a: int
 * Return: 0 or -1.
 */
int sqrt_helper(int n, int a)
{
	int b = a * a;

	if (b == n)
	{
		return a;
	}
	else if (b > n || a * a < 0)
	{
		return -1;
	}

	return sqrt_helper(n, a + 1);
}

/**
 *_sqrt_recursion - recursive function
 *@n : number
 *Return: -1 or 0
 *sqrt_helper - Recursive helper function.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return -1;
	}

		return sqrt_helper(n, 0);
}
