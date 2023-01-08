#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks if a character is uppercase or lower case
 *
 * @c: the function parameter
 *
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{

	if (isupper(c))
		return (1);
	else
		return (0);
}
