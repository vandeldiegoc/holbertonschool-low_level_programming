#include "hash_tables.h"
/**
 * key_index - a function that creates a hash table.
 * @size: size of the array.
 * @key: key node .
 * Return: key index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
