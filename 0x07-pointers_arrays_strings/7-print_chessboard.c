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
	int i = 0, j = 0;
	char *p;

	for (p = &a[i][j]; p <= &a[7][7]; p++)
	{
		_putchar(*p);
		if (p == &a[0][7] || p == &a[1][7] || p == &a[2][7] || p == &a[3][7] ||
			p == &a[4][7] || p == &a[5][7] || p == &a[6][7] || p == &a[7][7])
		_putchar('\n');
	}
}
