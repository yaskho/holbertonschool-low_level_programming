#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print multiplication
 * @argc:arg
 * @argv:arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int multiple, n1, n2;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		multiple = n1 * n2;
		printf("%d\n", multiple);
		return (0);
	}
	puts("Error");
	return (1);
}
