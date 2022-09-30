#include <unistd.h>
#include "main.h"

/**
 * main - print Fizz for multiples of 3, Buzz for 5 and FizzBuzz for 3 and 5
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			write(1, "FizzBuzz", 8);
		}
		else if ((i % 5) == 0)
		{
			write(1, "Buzz", 4);
		} else if ((i % 3) == 0)
		{
			write(1, "Fizz", 4);
		}
		else
		{
			write(1, i, 2);
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
