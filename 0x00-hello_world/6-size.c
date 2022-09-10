# !/ bin / bash
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
	puts("Size of char: %lu byte(s)", sizeof(char));
	puts("Size of int: %lu byte(s)", sizeof(int));
	puts("Size of long int: %lu byte(s)", sizeof(long int));
	puts("Size of long long int: %lu bytes(s)", sizeof(long long int));
	puts("Size of float: %lu byte(s)", sizeof(float));
	return (0);
}
