#include "main.h"

/**
 * create_array - create array of chars and initialize it with a specific char.
 *
 * @size: size of the array
 * @c: the specific char it is initialized to
 *
 * Return: a pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *t = malloc(sizeof(char) * size);
	unsigned int i;


	if (size == 0)
	{
		return (NULL);
		return (t);
	}
	if (size != 0)
	{
		for (i = 0; i < size; i++)
			t[i] = c;
	}
	return (t);
}
