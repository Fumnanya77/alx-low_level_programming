#include "main.h"

/**
 * print_numbers - prints numbers 1 to 9
 *
 * Return: Void
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
