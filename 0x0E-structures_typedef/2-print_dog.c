#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints the information about the dog from the struct
 *
 * @d: the name of the struct
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
	}
	else if (d->name == NULL)
	{
		d->name = "nill";
	}
	else if (d->owner == NULL)
	{
		d->owner = "nill";
	}
	else
	{
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
