#include "main.h"

/**
 * _puts_recursion - recursive function to print to screen
 *
 * @s: pointer to the string
 *
 * Return 0 Always
 */

void _puts_recursion(char *s)

{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);

	}
}