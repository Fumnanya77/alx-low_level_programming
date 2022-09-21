#include "main.h"

/**
 * swap_int - swap the values of the pointer's variable
 *
 * @a: first pointer variable
 *
 * @b: second pointer variable
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int i;
	int j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
