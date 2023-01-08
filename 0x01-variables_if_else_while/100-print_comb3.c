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
		for (j = '1'; j <= '9'; j++)
		{
			if ((i == j) || ((i & j) || (j & i)))
				continue;
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return(0);
}
