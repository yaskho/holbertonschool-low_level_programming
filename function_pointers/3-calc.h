#ifndef CALC_H
#define CALC_H

#include <stdlib.h>

/**
 * struct op - Struct op
 * @op: The operator
 * @function: The function associated
 */
typedef struct op
{
	char *op;
	int (*function)(int a, int b);
} op_t;
int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int (*get_op_func(char *))(int, int);

#endif
