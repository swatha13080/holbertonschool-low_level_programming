#include "hash_tables.h"

void delete_node_chain(hash_node_t *node);

/**
 * hash_table_delete - delete hash table
 * @ht: table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	size_t i = 0;

	if (!ht)
		return;
	if (!ht->array)
	{
		free(ht);
		return;
	}

	for (; i < ht->size ; i++)
	{
		if (ht->array[i])
		{
			delete_node_chain(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * delete_node_chain - delete node chain
 * @node: starting node
 */
void delete_node_chain(hash_node_t *node)
{
	hash_node_t *next;

	while (node)
	{
		next = node->next;
		free(node->key);
		free(node->value);
		free(node);
		node = next;
	}
}
