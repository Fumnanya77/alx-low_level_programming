#include <stdio.h>
/**
 * main - Entry point
 *
 * Print: lowercase of the alphabet except letters q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char xter;

	for (xter = 'a'; xter <= 'z'; xter++)
	{
		if ((xter == 'q') || (xter == 'e'))
		{
			continue;
		}
		putchar(xter);
	}
	putchar('\n');
	return (0);
}
