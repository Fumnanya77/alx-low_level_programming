#include "main.h"

/**
 * print_diagsums - print the sum of two diagonals
 *
 * @a: pointer to the array
 * @size: size of the sqaure matrix
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{

	int i = 0;
	int j = 0;
	int sum = 0;
	int diag = 0;
	int *p;

	for (p = &a[i][j]; p < &a[size][size]; p++)
	{
		if (i == j)
		{
			sum = sum + *a[i][j];
			diag = diag + *a[i][size - i - 1];
		}
	}
	printf("%d, %d\n", sum, diag);
}
