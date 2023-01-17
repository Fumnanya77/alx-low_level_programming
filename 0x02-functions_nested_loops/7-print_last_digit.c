#include "main.h"

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

	dec = 10;
	last_digit = n % dec;
	_putchar(last_digit);

	return (last_digit);
}
