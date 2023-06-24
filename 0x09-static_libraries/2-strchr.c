#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * _strchr - return a pointer to the first ocuurence of the specidfied letter
 *
 * @s: the pointer that returns the result
 * @c: the letter that is searched for
 *
 * Return: A pointer
 */

char *_strchr(char *s, char c)
{
	char *chrstr;

	chrstr = strchr(s, c);

	return (chrstr);
}
