#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - prints the number of elements in a linked list
 * @h: pointer to the list list_t list
 *
 * Return: the number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{

		n++;
		h = h->next;
	}
	return (n);
}
