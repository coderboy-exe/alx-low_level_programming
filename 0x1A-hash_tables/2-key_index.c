#include "hash_tables.h"

/**
 * key_index - returns the index of a given key in the hash table
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: Returns the index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
