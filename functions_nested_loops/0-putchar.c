#include<stdio.h>
/**
*main - printing putchar
*Return:0
*/
int main(void)
{

	int i;

	char array[] = "_putchar";
	i = 0;

	while (array[i] != '\0')
	{
		putchar(array[i]);

		i++;
	}
{
	putchar('\0');
}
	return (0);
}
