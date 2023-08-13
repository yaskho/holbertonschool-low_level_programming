#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - perform a given operation
 *
 * @argc: argument counts
 *
 * @argv: vector of arguments
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	char *c;
	int result;
	int (*function)(int, int) = get_op_func(argv[2]);

	c = (char *) malloc((sizeof(char)) * (strlen(argv[2]) + 1));
	strcpy(c, argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (function == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((!strcmp(c, '%') || !strcmp(c, '/')) && (atoi(*(argv + 3)) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = function(atoi(*(argv + 1)), atoi(*(argv + 3)));
	printf("%d\n", result);
	free(c);
	return (0);
}
