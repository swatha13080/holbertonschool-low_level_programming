#include "hash_tables.h"

/**
 * hash_table_get - get value from hash table
 * @ht: table to look up
 * @key: key to look up
 *
 * Return: string value if found, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
		{
			return (node->value);
		}
		node = node->next;
	}

	return (NULL);
}
