#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints all the arguements it recieves
 * @argc: Number of arguements
 * @argv: array of arguements
 * return 0 always
 *
 */

int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return 0;
}
