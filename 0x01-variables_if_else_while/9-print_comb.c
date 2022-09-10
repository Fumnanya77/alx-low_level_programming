#include <stdio.h>
/**
 * main - Entry point
 *
 * Print: All possible combinations of a single digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	short int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
