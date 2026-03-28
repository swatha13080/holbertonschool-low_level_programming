#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list of items to print
 *
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
	char *str;

	if (!h)
		return (0);

	if (!h->str)
		str = "(nil)";
	else
		str = h->str;

	printf("[%u] %s\n", h->len, str);
	return (1 + print_list(h->next));
}
