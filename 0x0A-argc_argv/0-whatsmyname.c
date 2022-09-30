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

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
