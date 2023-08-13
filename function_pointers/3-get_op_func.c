/**
 * get_op_func - returns a specific operation
 *@ch: char
 * Return: a function
*/

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int (*get_op_func(char *ch))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while ((ops + i)->op != NULL && (ops + i)->function != NULL)
	{
		if (!strcmp(ch, (ops + i)->op) || (!strcmp("\\*", ((ops + i)->op))))
			return ((ops + i)->function);
		i++;
	}
	return (NULL);
}
