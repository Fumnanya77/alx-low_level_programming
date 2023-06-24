#include "main.h"
#include <string.h>

/**
 * _strcpy - copies a string from the specified source to the specified destination
 *
 * @dest: pointer to the destination address
 * @src: pointer to the destination source
 */

char *_strcpy(char *dest, char *src)
{
	char *cpres;

	cpres = strcpy(dest, src);

	return (cpres);
}
