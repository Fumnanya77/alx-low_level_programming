#include <stdio.h>
/**
 * main - Entry point
 *
 * Print: Alphabets in lower and Upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char xter;
	char XTER;

	for (xter = 'a'; xter <= 'z'; xter++)
	{
		putchar(xter);
	}
	for (XTER = 'A'; XTER <= 'Z'; XTER++)
	{
		putchar(XTER);
	}
	putchar('\n');
	return (0);
}
