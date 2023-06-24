#include "main.h"
#include <string.h>

/**
 * _memset - Duplicate value in the memory
 * @s: the pointer to the memory adress
 * @b: the value to be duplicated
 * @n: The number of times it shoild be written in the memory
 *
 * Return: Return a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *setmem;

	setmem = memset(s, b, n);

	return (setmem);
}
