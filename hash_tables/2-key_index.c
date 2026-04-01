#include "hash_tables.h"

/**
 * key_index - find index for key
 * @key: string to index
 * @size: upper limit for index
 *
 * Return: an index for the string
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || !*key || !size)
		return (0);

	return (hash_djb2(key) % size);
}
