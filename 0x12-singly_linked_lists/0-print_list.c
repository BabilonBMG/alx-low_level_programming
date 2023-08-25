#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - Prints all elements of a list
 * @h: Pointer to a list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
