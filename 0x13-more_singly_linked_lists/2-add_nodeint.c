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
	listint_t **temp;

	new = malloc(sizeof(listint_t));
	temp = &new;
	new->n = n;
	new->next = *head;
	head = temp;

	if (new != NULL)
		new = new;
	else
		new = NULL;
	return (new);
}
