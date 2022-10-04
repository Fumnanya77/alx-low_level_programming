#include "main.h"

/**
 * _strdup - print a string from a duplicate memory
 *
 * @str: pointer to the duplicate string of str
 *
 * Return: Pointer to the duplicate string
 */

char *_strdup(char *str)
{
	char *maldup;

	if (str == NULL)
		return (NULL);
	maldup = malloc(sizeof(*str));
	maldup = strdup(str);

	return (maldup);
}
