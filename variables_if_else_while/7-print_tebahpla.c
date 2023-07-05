#include <stdio.h>

/**
*main - for printing the lowercase alphabet in reverse
*using putchar followed by a new line
*Return: 0
*/

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{

	putchar(letter);

	}
	putchar('\n');
	return (0);
}
