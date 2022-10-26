#include "lists.h"

/**
 * free_listint - to free memory used by listint
 *
 * @head: pointer to the list to be freed
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	unsigned int i;
	listint_t *temp;

	temp = head;

	for (i = 0; temp != NULL; i++)
	{
		free(temp);
		temp = temp->next;
	}
	free((void *)print_listint(head));
}
