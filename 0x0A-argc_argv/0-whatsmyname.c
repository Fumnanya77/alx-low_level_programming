#include "main.h"

/**
 * main - print the name of the file
 *
 * @argc: the counter of the arguments supplied in the command line
 *
 * @argv: the array pointer
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
