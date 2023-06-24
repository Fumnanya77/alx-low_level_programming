#include "main.h"
#include <ctype.h>

/**
 * _islower - check if the input is lowercase
 *
 *@c: the input parameter
 *
 * Return: an int; 1 if tru, 0 if false
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
