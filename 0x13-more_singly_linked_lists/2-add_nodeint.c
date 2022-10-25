#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of the list
 *
 * @head: pointer to the first pointer
 * @n: the value to add to the node
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *old;

	old = malloc(sizeof(listint_t));
	old->next = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = old;
	head = &new;
	for (i = 0; head != )

	if (new != NULL)
		new = new;
	else
		new = NULL;
	return (new);
}
