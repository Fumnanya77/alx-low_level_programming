#include "main.h"
#include <string.h>

/**
 * _strcpy- copies a string from source to destination
 *
 * @dest: pointer to the destination address
 * @src: pointer to the destination source
 * Return: The copied string
 */

char *_strcpy(char *dest, char *src)
{
	char *cpres;

	cpres = strcpy(dest, src);

	return (cpres);
}
