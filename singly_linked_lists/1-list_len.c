#include "lists.h"

/**
 * list_len - find length of a list
 * @h: the list of items to measure
 *
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	else
		return (1 + list_len(h->next));
}
