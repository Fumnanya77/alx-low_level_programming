#include <stdio.h>

/**
 * print_name - prints the name of a person
 *
 * @name: anme of a person
 * @f: function pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
