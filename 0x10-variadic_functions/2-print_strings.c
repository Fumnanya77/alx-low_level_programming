#include "variadic_functions.h"
#include <ctype.h>

/**
 * print_strings - prints strings from the unkniwn arguments
 *
 * @separator: the separator symbol
 * @n: the counter parameter
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (!isdigit(va_arg(ap, int)))
		vprintf(n, ap);
		if (i < (n - 1))
			vprintf(*separator, ap);
	}
	va_end(ap);
	printf("\n");
}
