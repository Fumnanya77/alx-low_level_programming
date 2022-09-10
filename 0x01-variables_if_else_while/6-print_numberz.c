#include <stdio.h>
/**
 * main - Entry point
 *
 * Print: Base 10 digits withour type char
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	short int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
