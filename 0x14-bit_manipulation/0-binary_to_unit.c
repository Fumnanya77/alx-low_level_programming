#include "main.h"

/**
 * binary_to_unit - convert a binary string to decimal
 *
 * @b: the binary string
 *
 * Return: unsigned integer
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (; b[i] != '\0'; i++)
	{
		while (b[i] == '0' || b[i] == '1')
		{
			val <<= 1;
			val += b[i] - '0';
		}
	}
	return (val);
}
