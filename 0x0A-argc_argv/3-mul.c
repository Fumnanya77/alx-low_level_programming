#include "main.h"

/**
 * main - multiply the arguments of the command line that are integers
 *
 * @argc: counts the number of argument passed in the command line
 * @argv: pointer to the arguments stored as strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	for (i = 0; i < argc; i++)
	{
		if (isdigit(argv[i]))
		{
			mul = mul * argv[i];
			printf("%d\n", mul);
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	return (0);
}
