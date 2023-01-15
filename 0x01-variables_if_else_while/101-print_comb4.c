#include <stdio.h>

/**
 * main - print all possible combination of three digits
 *
 * Return: ALways sucessful 0.
 */

int main(void)
{
	short int i, j, x;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = i; j <= '8'; j++)
		{
			for (x = j; x <= '9'; x++)
			{
				if (((i == j)) || ((i == x)) || ((j == x)))
					continue;
				putchar(i);
				putchar(j);
				putchar(x);
				if (i < '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
