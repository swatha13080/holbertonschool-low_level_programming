#include "lists.h"

/**
 * delete_dnodeint_at_index - delete item at index
 * @h: pointer to pointer to head of list
 * @idx: index of item to be deleted
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
	dlistint_t *prev, *next;

	if (!h || !*h)
		return (-1);

	next = (*h)->next;
	prev = (*h)->prev;

	if (!idx)
	{
		if (prev)
			prev->next = next;
		if (next)
			next->prev = prev;
		free(*h);
		return (1);
	}
	return (delete_dnodeint_at_index(&next, idx - 1));
}
