#include <stdlib.h>
/**
 * _calloc - function to calloc
 * @nmemb: int
 * Return: to return the allocated memory
 * 
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i;
    unsigned char *ptr;
    void *allocated_memory;

    if (nmemb == 0 || size == 0)
        return (NULL);
    allocated_memory = malloc(nmemb * size);
    if (allocated_memory == NULL)
        return NULL;
    ptr = (unsigned char *)allocated_memory;
    for (i = 0; i < nmemb * size; i++)
    ptr[i] = 0;
        return (allocated_memory);
}
