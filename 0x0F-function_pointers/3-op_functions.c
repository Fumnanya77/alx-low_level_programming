#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two integers together
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return:the sum
 */

int op_add(int a, int b)
{
	int c;

	c = (a + b);
	return (c);
}

/**
 * op_sub - subtravts two integers
 *
 * @a:the first integer
 * @b:the second integer
 *
 * Return: the subtraction
 */

int op_sub(int a, int b)
{
	int c;

	c = (a - b);
	return (c);
}

/**
 * op_mul - multiplies two integers
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the multiplication
 */

int op_mul(int a, int b)
{
	int c;

	c = (a * b);
	return (c);
}

/**
 * op_div - divides two integers
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the division
 */

int op_div(int a, int b)
{
	int c;

	c = (a / b);
	return (c);
}

/**
 * op_mod - the modulus of two integers
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the modulus
 */

int op_mod(int a, int b)
{
	int c;

	c = (a % b);
	return (c);
}
