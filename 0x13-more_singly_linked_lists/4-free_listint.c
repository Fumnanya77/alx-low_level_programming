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
	free(head);
}
