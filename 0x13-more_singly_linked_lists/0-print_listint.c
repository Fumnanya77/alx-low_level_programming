#include "lists.h"

/**
 * print_p - print out a positive integer using putchar
 *
 * @n: the number to print
 *
 * Return: Nothing
 */

void print_p(unsigned int n)
{
	if (n / 10 != 0)
		print_p(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print - print integers using putchar
 *
 * @n: the number to print
 *
 * Return: Nothing
 */

void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	print_p((unsigned int)n);
}

/**
 * print_listint - print a given list of int
 *
 * @h: a pointer to the list  to be printed
 *
 * Return: integer; the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *tem;

	tem = h;

	for (i = 0; tem != NULL; i++)
	{
		print(tem->n);
		_putchar('\n');
		tem = tem->next;
	}
	return (i);
}
