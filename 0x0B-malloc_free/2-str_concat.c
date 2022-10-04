#include "main.h"

/**
 * str_concat - concatenate strings together
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: Pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *str = malloc(sizeof(*s1 + *s2));

	strcpy(str, s1);
	strcat(str, s2);

	return (str);
}
