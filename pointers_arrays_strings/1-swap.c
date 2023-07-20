#include"main.h"

/**
 * swap_unt - swap two nums
 *
 * @a: num1
 *
 * @b: num 2
*/

void swap_int(int *a, int *b)
{
    int c;

    c = (*a);
    (*a) = (*b);
    (*b) = c;
}
