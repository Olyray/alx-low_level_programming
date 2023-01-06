#include "hash_tables.h"

/**
 * key_index - returns the key-index for the hashtable
 * @key: The string of the key
 * @size: the size of the hashtable
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int raw_hash;
	unsigned long int final_hash;

	raw_hash = hash_djb2(key);
	final_hash = raw_hash % size;
	return (final_hash);
}
