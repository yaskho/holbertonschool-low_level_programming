#include "main.h"
#include <stdio.h>

/**
*_isupper -  function that checks for uppercase character.
*Return 1: if c is uppercase
*Return 0:otherwise
*c:variable to check
*/
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z') 
    {
    return (1);
    }

     else
    
    {
        return (0);
    }
}