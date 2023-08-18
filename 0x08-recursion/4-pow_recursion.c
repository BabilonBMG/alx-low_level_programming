#include "main.h"
#include <stdlib.h>
#include <math.h>

/**
 * _pow_recursion- returns the value of x raised to the power of y.
 * @x: vairable to be raised to the power of y
 * @y: power
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropirately
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));

}
