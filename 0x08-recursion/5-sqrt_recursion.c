#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural root of a number
 * @n: number to be squared
 * @r: root of the variable given
 * actual_sqrt_recursion - identifies the real square root of a variable
 */
int actual_sqrt_recursion(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}