#include <stdio.h>

/**
 * main - function to print all arguments
 * @argc: arg
 * @argv: arg
 * Return: 0
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	while (*argv != NULL)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
