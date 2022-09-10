#include <stdio.h>
/**
 * main - Entry point
 *
 * Print: Numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num = '0';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
