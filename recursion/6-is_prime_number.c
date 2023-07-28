#include <math.h>

/**
 *prime - checking for prime number.
 *@n: the given number
 *@i: checking variable
 * Return: 1 or 0
 */

int prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (!(n % i))
		return (0);
	return (prime(n, i + 1));
}

/**
 *is_prime_number - checking for prime number
 *@n: checking variable
 *Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
