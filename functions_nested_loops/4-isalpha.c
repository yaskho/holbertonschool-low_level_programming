#include "main.h"
/**
*_isalpha - function that checks for alphabetic character.
*@c: checking character
*Return:1 if c is lowercase
*/

int _isalpha(int c)

{

	return (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ? 1 : 0);

}
