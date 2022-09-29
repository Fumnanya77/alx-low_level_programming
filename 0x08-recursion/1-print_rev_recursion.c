#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse order
 *
 * @s: the sstring
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	int i, lenstr;

	lenstr = strlen(s);
	for (i = lenstr; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
