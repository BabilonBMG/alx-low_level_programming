#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - a function that adds up all of its parameters
 * @n: The number of parameters passed
 * @...: A variable number of parameters to calculate the sim of
 *
 * Return: if n == 0 - 0
 *
 * otherwise - the sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
