#include "main.h"
#include <string.h>

/**
 * _strstr - finds the first occurence of a substring
 *
 * @haystack: The reference string
 * @needle: The substring
 *
 * Return: A pointer to the first occurence of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *strsqr;

	strsqr = strstr(haystack, needle);

	return (strsqr);
}
