#include"main.h"
#include<stdio.h>

/**
*printf - function that prints all natural numbers from n to 98
*@n:integer to check
*Return:always 0
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
