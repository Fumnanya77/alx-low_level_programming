#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that summs all of it's parameters
 *
 * @n: the numbers to be summed
 *
 * Return: an integer; the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);

	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
