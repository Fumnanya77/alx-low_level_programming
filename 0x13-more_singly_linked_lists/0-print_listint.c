#include "lists.h"

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

	for (i = 0; h != NULL; i++)
	{
		_putchar((h->n)%10 + '0');
		_putchar('\n');
		h = h->next;
	}
	return (i);
}
