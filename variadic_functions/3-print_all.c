#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib>
/**
*print_char - function to print
*@args: arguments
*va_list - Declare a va_list
*va_start - Initialize the va_list
*va_end - clean the va_list
*@format: constant
*@s: string
*/

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		else if (format[i] == 'f')
			printf("%f", (float)va_arg(args, double));
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
		}

		if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
							 format[i] == 'f' || format[i] == 's'))
			printf(", ");

		i++;
	}

	printf("\n");
	va_end(args);
}