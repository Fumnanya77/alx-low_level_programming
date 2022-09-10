#include <stdio.h>
/**
 * main - Entry point
 *
 * Print: Print out without puts or printf
 *
 * Return: For this code 1 (Success)
 */

int main(void)
{
	char *quote = "and that piece of art is usefule\" - Dora Korpar, 2015-10-19";

	fprintf(stdout, "%s\n", quote);
	return (1);
}
