#include "main.h"

/**
 * print_square - print the # in squares
 *
 * @size: the number of # to be printed
 *
 * Return: Void
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size == 0)
	{
		_putchar('\n');
	}
}
