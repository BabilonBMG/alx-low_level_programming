#include "main.h"
#include <stdio.h>
/**
 * main -print the name if the program
 * @argc:counts the number of arcuments
 * @argv: array of arguements
 *
 * Return: Always 0 (success)
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", *argv);
	return (0);
}
