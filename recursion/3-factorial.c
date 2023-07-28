#include"main.h"
#include<stdio.h>
/**
 *factorial - function that returns the factorial of a given number
 *@n: variable to check with
 *Return: factorial
*/
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n <= 0)
		return (-1);
	return (n * factorial(n - 1));
}
