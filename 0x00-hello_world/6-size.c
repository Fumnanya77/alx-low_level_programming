#include <stdio.h>

/**
 * main - Entry point
 *
 * Print: The size of various types on the computer
 *
 * Return: Always (Success)
 */

int main(void)
{
	printf("Size of char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of long int: %u byte(s)\n", sizeof(long int));
	printf("Size of long long int: %u bytes(s)\n", sizeof(long long int));
	printf("Size of float: %u byte(s)\n", sizeof(float));
	return (0);
}
