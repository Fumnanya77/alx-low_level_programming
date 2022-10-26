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

	new = (listint_t *)malloc(sizeof(listint_t));
	new->n = n;
	new->next = (*head);
	(*head) = new;

	if (head != &new)
		new = NULL;
	return (new);
}
