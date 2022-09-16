#include "main.h"

/**
 * _isdigit - checks whether a character is digit
 *
 * @c: parameter of _isdigit function
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if ( isdigit(c) )
		return (1);
	else
		return (0);
}
