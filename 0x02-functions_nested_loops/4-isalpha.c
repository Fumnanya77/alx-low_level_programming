#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: the input character
 *
 * Return: an in; 1 if true and 0 if false.
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
