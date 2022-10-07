#include "main.h"

/**
 * _strncpy - copy a string into a variable n times
 *
 * @dest: pointer to the destination variable
 * @src: pointer to the souce string
 *
 * Return: a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *_cpy;

	_cpy = strncpy(dest, src, n);
	
	return (_cpy);
}
