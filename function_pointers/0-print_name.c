#include "function_pointers.h"
/**
* print_name - function to print the name
*@name: name ton print
*@f: function that print
*/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
