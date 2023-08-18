#include "main.h"

/**
 * factorial- Determines the factorial of a given number
 * @n: Variable to be factorized
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately 
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (n * factorial(n - 1));
}
