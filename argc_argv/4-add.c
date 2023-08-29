#include <stdio.h>
#include <stdlib.h>

/**
 * isadigit - function to check
 * @ch: string
 *Return: yes
 */

int isadigit(char *ch)
{
	int yes = 1, i = 0;
	char c;
	while (*(ch + i) != '\0' && yes)
	{
		c = *(ch + i);
		if (!(c <= '9' && c >= '0'))
			yes = 0;
		i++;
	}
	return (yes);
}

/**
 * main - add two positive number
 * @argc: arg
 * @argv: arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, i = 1;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}
	while (i < argc)
	{
		if (!isadigit(*(argv + i)))
		{
			puts("Error");
			return (1);
		}
		n += atoi(argv[i]);
		i++;
	}
	printf("%d\n", n);
	return (0);
}
