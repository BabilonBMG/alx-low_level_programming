#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: The first number
 * @b: The second number;
 *
 * Return: the sum of a and b
 *
 */
int op_add(int a, int b)
{

	return (a + b);
}

/**
 * op_sub - Returns the diference between two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: the diference of a and be
 */

int op_sub(int a, int b)
{

	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: the probuct of a and b
 */

int op_mul(int a, int b)
{

	return (a * b);
}

/**
 * op_div - Returns the division of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: a divided by b
 */

int op_div(int a, int b)
{

	return (a / b);
}

/**
 * op_mod - Return the remainder of a divided by b
 * @a: the first number
 * @b: the second number
 *
 * Return: the remainder of a divided by b
 */

int op_mod(int a, int b)
{

	return (a % b);
}
