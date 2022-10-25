#include "lists.h"

/**
 * listint_len - print the length of a given list of int
 *
 * @h: a pointer to the list  to be printed
 *
 * Return: integer; the number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
