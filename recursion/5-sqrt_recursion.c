#include "main.h"
#include<stdio.h>

/**
 * function _sqrt_recursion - Recursive helper function to find the square root.
 * @n: The number to find the square root.
 * @a: int
 *
 * Return: The square root if found, otherwise -1.
 */
int sqrt_helper(int n, int a)
{
	int b = a * a;

	if (b == n)
		return a;
	else if (b > n || a * a < 0)
		return -1;

	return sqrt_helper(n, a + 1);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;

	return sqrt_helper(n, 0);
}
