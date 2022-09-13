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
	char *ch = "_putchar";

	while (*ch != '\0')
	{
		putchar(*ch);
		ch = ch + 1;
	}
	putchar('\n');
	return (0);
}
