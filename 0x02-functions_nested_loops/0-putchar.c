#include <stdio.h>
/**
 * main - Entry point
 *
 * Print: output putchar
 *
 * Return: Always 0 (Success)
 */

#include "main.h"

int main(void)
{
	char *ch = "_putchar\n";

	for (; *ch != '\0'; ch++)
	_putchar(*ch);
	return (0);
}
