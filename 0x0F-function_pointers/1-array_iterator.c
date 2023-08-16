#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator- prints each array element on a new line
 * @array: array
 * @size: the number of elements to print
 * @action: a pointer to the function that need to used
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
