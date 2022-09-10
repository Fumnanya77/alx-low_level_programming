#include <stdio.h>
/**
 * main - Entry point
 *
 * Print: The letters of the alphabet in reverse order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char pal;

	for (pal = 'z'; pal >= 'a'; pal--)
	{
		putchar(pal);
	}
	putchar('\n');
	return (0);
}
