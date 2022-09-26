#include "main.h"

/**
 * print_chessboard - print the values of an array
 *
 * @a: the rray variable
 *
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 7 ; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar((*a[i]));
		}
		_putchar('\n');
	}
}
