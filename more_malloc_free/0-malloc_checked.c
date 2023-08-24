#include <stdlib.h>
/**
 * malloc_checked - function to allocate memory
 * @b: int
 * Return: ptr
*/
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);
    if (ptr == NULL)
        exit(98);
    return (ptr);
}
