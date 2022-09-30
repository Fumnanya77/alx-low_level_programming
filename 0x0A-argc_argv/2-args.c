#include "main.h"

/**
 * main - print all the argument passed into the command line
 *
 * @argc: the count of the argument passed
 * @argv: the pointer to the argument passed i.e sttring
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i ++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
