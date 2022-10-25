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
	const listint_t *tem;

	tem = h;

	for (i = 0; tem != NULL; i++)
	{
		printf("%d", tem->n);
		tem = tem->next;
	}
	return (i);
}
