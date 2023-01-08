#include "main.h"

/**
 * _strpbrk - searches and returns a string in s valid in accept
 *
 * @s: Pointer the reference string
 * @accept: pointer to the conditional string
 *
 * Return: A pointer to the byte that matches
 */

char *_strpbrk(char *s, char *accept)
{
	char *brkstr;

	brkstr = strpbrk(s, accept);

	return (brkstr);
}
