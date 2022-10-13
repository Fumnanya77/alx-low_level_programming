#include <stdio.h>

/**
 * int_index - that searches for an integer
 *
 * @array: the array it saerches through
 * @size: the size of the array
 * @cmp: the function pointer
 *
 * Return: index if cmp !return 0, -1 if otherwise or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i, c;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			c = i;
			break;
		}
	}
	return (c);
}
