#include<stdarg.h>
/**
*sum_them_all - sum function
*Return: 0
*@n: variable
*va_list - Declare a va_list
*va_start - Initialize the va_list
*va_end - clean the va_list
*/
int sum_them_all(const unsigned int n, ...)
unsigned int sum = 0 , int i;
va_list args;
if (!n)
	return(0);
va_starts (args  ,n);
for (i = 0; i <n; i ++)
	sum +=va_args (args, int);
va_end(args);
return(sum);


