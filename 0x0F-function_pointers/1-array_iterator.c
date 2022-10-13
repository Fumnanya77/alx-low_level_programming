#include <stdio.h>

/**
 * array_iterator - execte the function on each element of the array
 *
 * @array: the array
 * @size: the size of the array
 * @action: the function pointer
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
