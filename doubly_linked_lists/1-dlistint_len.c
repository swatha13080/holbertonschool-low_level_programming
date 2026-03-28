#include "lists.h"

/**
 * dlistint_len - find length of a list
 * @h: the list of items to measure
 *
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (!h)
		return (0);
	else
		return (1 + dlistint_len(h->next));
}
