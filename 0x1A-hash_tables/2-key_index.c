#include "hash_tables.h"

/**
 * key_index - A function that gives the index of a key
 *
 * @key: The key
 * @size: The size of the array
 *
 * Return: An int; the index to the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, k_index;

	index = hash_djb2((unsigned char *)key);
	k_index = index % size;

	return (k_index);
}
