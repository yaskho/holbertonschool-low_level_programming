#include "main.h"
/**
 * reverse_array - fuction to reserve
 * @a: variable
 * @n: variable
*/

void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{

		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
