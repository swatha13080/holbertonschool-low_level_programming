#include "hash_tables.h"
hash_node_t *create_node(const char *key, const char *val, hash_node_t *next);
void insert_node(hash_node_t *node, hash_table_t *ht, unsigned long int index);

/**
 * hash_table_set - add element to hash table
 * @ht: table to modify
 * @key: key record to modify
 * @value: value to add for the key
 *
 * Return: 1 upon success, 0 upon failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	char *temp;

	if (!ht || !key || !*key || !ht->size || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
		{
			temp = strdup(value);
			if (!temp)
				return (0);
			free(node->value);
			node->value = temp;
			return (1);
		}
		node = node->next;
	}

	node = create_node(key, value, NULL);
	if (!node)
		return (0);
	insert_node(node, ht, index);
	return (1);
}

/**
 * create_node - create node
 * @key: key in the hash table
 * @value: value of the node
 * @next: a pointer to the next node
 *
 * Return: a pointer to the created node
 */
hash_node_t *create_node(const char *key, const char *value, hash_node_t *next)
{
	hash_node_t *result = malloc(sizeof(hash_node_t));

	if (!result)
		return (NULL);
	result->key = strdup(key);
	if (!result->key)
	{
		free(result);
		return (NULL);
	}
	result->value = strdup(value);
	if (!result->value)
	{
		free(result->key);
		free(result);
		return (NULL);
	}
	result->next = next;
	return (result);
}

/**
 * insert_node - inserts node in hash table
 * @node: node to insert
 * @ht: hash table to insert node
 * @index: inext in the array
 *
 * Return: 1 if successful, 0 otherwise
 */
void insert_node(hash_node_t *node, hash_table_t *ht, unsigned long int index)
{
	hash_node_t *first;

	if (!ht->array[index])
	{
		ht->array[index] = node;
	}
	else
	{
		first = ht->array[index];
		node->next = first;
		ht->array[index] = node;
	}
}
