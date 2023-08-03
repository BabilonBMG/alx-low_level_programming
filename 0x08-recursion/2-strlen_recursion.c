#include "main.h"
#include <string.h>

/**
 * _strlen_recursion- Prints the length of a string.
 * @s: The string who's length we want to display.
 * Return:length of string
 */

int _strlen_recursion(char *s)

{
	int longit = 0;

	if (*s)
	{
	longit++;
	longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
