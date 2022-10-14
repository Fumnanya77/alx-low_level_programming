#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - function that prints numbers
 *
 * @separator: what separates the numbers to be printed
 * @n: the numbers to be printed
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator == NULL)
		exit(0);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < (n - 1))
			printf("%c ", *separator);
	}
	printf("\n");
}
