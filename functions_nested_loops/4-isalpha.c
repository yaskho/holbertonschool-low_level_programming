#include "main.h"
/**
*_isalpha - function that checks for alphabetic character.
*Return:1 if c is lowercase
*Return:0 otherwise
*c: checking character
*/

int _isalpha(int c)

{

	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ? 1 : 0;

}
