#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate strings
 *
 * @dest: The destination of the conaacatenation
 *
 * @src: The src of the concatenation
 *
 * Return: A pointer to the resulting dest
 */

char *_strcat(char *dest, char *src)
{
	char *_add;

	_add = strcat(dest, src);

	return (_add);
}
