#include "main.h"
#include <math.h>

/**
 * is_prime_number - shows whether an integer is a prime number or not
 * actual_prime - determines whether an integer is a prime number or not
 * @n: number to check
 * Return: 1 if n is a prime number, 0 if not
 */

int actual_prime(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

int actual_prime(int n, int i)
/**
 * @i: integer to count
 * actual_prime - determines whether an integer is a prime number or not
 */
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

