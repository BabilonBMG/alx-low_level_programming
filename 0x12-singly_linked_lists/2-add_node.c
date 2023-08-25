#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - adss a new node at the begining of a list
 * @head: double pointer to the list_t lst
 * @str: the string to be duplicated
 *
 * Return: the address of the new element,
 * or NULL if it failed
 *
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	id(!new)
		return (NULL);
	new->str = strdup(st);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);

}
