#include "main.h"

/**
 * _strspn - returns the length of the specified string
 *
 * @s: The referenced string
 * @accept: The specified string
 *
 * Return: The number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int spnstr;

	spnstr = strspn(s, accept);

	return (spnstr);
}
