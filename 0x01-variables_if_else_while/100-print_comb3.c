#include <stdio.h>
/**
 * main - The main Entry point
 *
 * Return: Nothing always 0
 */

int main(void)
{
	short int i;
	short int j;

	for (i = '0'; i < '9'; i++)
	{
		for (j = i; j <= '9'; j++)
		{
			if (i == j)
				continue;
			putchar(i);
			putchar(j);
			if (i < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
