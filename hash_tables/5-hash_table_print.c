#include "hash_tables.h"

void print_node_chain(hash_node_t *node, char *sep);

/**
 * hash_table_print - print hash table
 * @ht: table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	char *sep = "";
	size_t i = 0;

	if (!ht || !ht->array)
		return;
	putchar('{');
	for (; i < ht->size ; i++)
	{
		if (ht->array[i])
		{
			print_node_chain(ht->array[i], sep);
			sep = ", ";
		}
	}
	printf("}\n");
}

/**
 * print_node_chain - print key values of node chain
 * @node: starting node
 * @sep: separator ", " if not first, "" if first item to be printed
 */
void print_node_chain(hash_node_t *node, char *sep)
{
	while (node && node->key && node->value)
	{
		printf("%s'%s': '%s'", sep, node->key, node->value);
		sep = ", ";
		node = node->next;
	}
}
