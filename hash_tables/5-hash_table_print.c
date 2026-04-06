#include "hash_tables.h"

void print_node_chain(hash_node_t *node, char separator);

/**
 * hash_table_print - print hash table
 * @ht: table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	char separator = 0;
	size_t i = 0;

	if (!ht || !ht->array)
		return;
	putchar('{');
	for (; i < ht->size ; i++)
	{
		if (ht->array[i])
		{
			print_node_chain(ht->array[i], separator);
			separator = ',';
		}
	}
	printf("}\n");
}

/**
 * print_node_chain - print key values of node chain
 * @node: starting node
 * @separator: ',' if not first, '\0' if first item to be printed
 */
void print_node_chain(hash_node_t *node, char separator)
{
	while (node && node->key && node->value)
	{
		putchar(separator);
		printf("'%s': '%s'", node->key, node->value);
		separator = ',';
		node = node->next;
	}
}
