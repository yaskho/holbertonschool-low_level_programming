#include "function_pointers.h"
/**
*array_iterator - make a function at each element
*of an array
*@array: the array
*@size: array's size
*action: the function
*/
void array_iterator(int *array, size_t size, void(*action)(int))
{
    size_t i;

    if (action == NULL)
        return;
    for (i = 0; i < size; i++)
    {
        action(array[i]);
    }
}
