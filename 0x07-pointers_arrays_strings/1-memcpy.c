#include "main.h"

/**
 * _memcpy - copies values from src to destination in the memory
 *
 * @dest: The destination pointer to the adddress
 * @src: the src pointer to the address
 * @n: The number of times the memory is to be copied
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *cpymem;

	cpymem = memcpy(dest, src, n);

	return (cpymem);
}
