#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat: a function that concatenates two strings.
 * @ *s1: string to be concatenated to string 2
 * @ *s2: string to be concatenated with string 1
 * return NULL on failure
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	s2 = "";
	i = ci =0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (1+ ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		i++, ci++;
	}
	conct[i]= '\0';
	return(conct);
}
