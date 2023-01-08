#include "main.h"

/**
 * alloc_grid - functions that returns a pointer to a dimensional array
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: A pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **grids = malloc(sizeof(int) * (width * height));

	if (grids == NULL)
		return (NULL);
	if (width == 0 || height == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			_putchar('0');
			_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
	return (grids);
}
