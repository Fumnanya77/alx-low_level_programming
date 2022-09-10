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
	printf("Size of int: %u byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("Size of float: %u byte(s)\n", sizeof(float));
	return (0);
}
