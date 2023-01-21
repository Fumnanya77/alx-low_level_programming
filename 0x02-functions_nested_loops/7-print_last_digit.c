#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: the parameter input
 *
 * Return: An int, the last digit of a number
 */

int print_last_digit(int n)
{
	int last_digit, dec;

	dec = abs(n);
	last_digit = dec % 10;
	_putchar('0' + last_digit);

	return (last_digit);
}
