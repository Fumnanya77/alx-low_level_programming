#include <string.h>
#include "main.h"

/**
 * print_rev - Print string characters in reverse
 *
 * @s: the pointer to the variable with the string
 *
 * Return: Void
 */

void print_rev(char *s)
{
	char c;
	char *s2 = s + strlen(s);

	while (s2 > s)
	{
		s2--;
		c = *s;
		*s = *s2;
		*s2 = c;
		s++;

		puts(s);
	}
}
