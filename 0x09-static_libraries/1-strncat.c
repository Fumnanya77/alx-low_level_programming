#include "main.h"
#include <string.h>

/**
 * _strncat- concatenate strings using n bytes
 *
 * @dest: where the string is concatenated into
 * @src: where the string is concatenated from
 * @n: number of bytes
 *
 * Return: A pointer to the string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *_cat;

	_cat = strncat(dest, src, n);
	return (_cat);
}
