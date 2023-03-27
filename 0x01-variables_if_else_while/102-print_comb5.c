#include <stdio.h>

/**
 * main - Entry point; print all possible combination of two two-digits numbers
 *
 * Return: Always 0. Successful
 */

int main(void)
{
	int i, j, x, y;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (x = i; x <= '9'; x++)
			{
				for (y = j; y <= '9'; y++)
				{
					 if (((i == x)) && ((j == y)))
						 continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(x);
					putchar(y);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
