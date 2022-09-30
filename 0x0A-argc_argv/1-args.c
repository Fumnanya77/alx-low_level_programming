#include "main.h"

/**
 * main - print the number of arguments passed in the command line
 *
 * @argc: counts the number of arguments passed in the command line
 * @argv: pointer to the memory the arguments are stored
 *
 * Return: Always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
