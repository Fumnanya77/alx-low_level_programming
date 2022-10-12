#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the struct variables
 *
 * @d: the name of the struct
 * @name: the name attribute
 * @age: the age attribute
 * @owner: the owner attribute
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
