#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: 1 on Success
 * retrun -1 on error, and errno is set apropriately
 *
 */

int _putchar(char c)
{

	return (write(1, &c, 1));
}
