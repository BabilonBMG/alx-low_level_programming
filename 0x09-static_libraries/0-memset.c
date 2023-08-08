#include "main.h"
/**
 * _memset - fills a block of memory with a specified value
 * @s: starting address of the memory to be filled
 * @b: the desired value
 * @n: number of byts to be changed
 * descripiton of _memset: fill a block of memory with a particular value
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{

	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
