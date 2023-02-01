#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the given key
 * @size: size of array of the hash table
 *
 * Return: (int) the index of the key in the table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}

