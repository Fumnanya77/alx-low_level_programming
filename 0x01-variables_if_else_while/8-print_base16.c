#include <stdio.h>
/**
 * main - Entry point
 *
 * Print: All digits of hexadecimal
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hxn;
	char hxa;

	for (hxn = '0'; hxn <= '9'; hxn++)
	{
		putchar(hxn);
	}

	for (hxa = 'a'; hxa <= 'f'; hxa++)
	{
		putchar(hxa);
	}
	putchar('\n');
	return (0);
}
