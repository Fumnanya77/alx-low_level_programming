#include "main.h"

/**
 * print_line - prints out underscore to the standard output
 *
 * @n: Number of underscores to print
 *
 * Return: Void
 */

void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
