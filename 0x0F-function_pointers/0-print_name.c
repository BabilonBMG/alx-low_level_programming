#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - a function that prints a name
 * @name: string to be printed
 * @f: pointer to a string
 * Return 0 always,otherwise 1
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
