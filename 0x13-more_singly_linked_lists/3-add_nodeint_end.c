#include "main.h"

/**
 * add_nodeint_end - add a linked list node at the end
 *
 * @head: pointer to the pointer of the node
 * @n: the value of the node to be added
 *
 * Return: an address to the added node
 */

listint_t add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = (listint_t *)malloc(sizeof(listint_t));
	last = *head;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new);
}
