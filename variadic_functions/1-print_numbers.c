#include<stdio.h>
#include<stdarg.h>
/**
*print_numbers - function to print numbers
*@separator:string
*@n: variable
*@a:variable
*va_list - Declare a va_list
*va_start - Initialize the va_list
*va_end - clean the va_list
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int a;
	va_list args;
{
	va_start(args, n);
	for (i = 0; i < n; i++)
	a = va_arg(arg, int);
	if (separator != NULL && i != n - 1)
	printf("%d%s", a, separator);
}

		putchar('\n');
}
