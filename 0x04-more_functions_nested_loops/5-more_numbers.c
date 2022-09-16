#include "main.h"

/**
 * more_numbers - prints from number 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	char c;
	int x;
	int z;

	for (x = 1; x <= 10; x++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(c);
		}
		for (z = '0'; z < '5'; z++)
		{
			_putchar('1');
			_putchar(z);
		}
		_putchar('\n');
	}
}
