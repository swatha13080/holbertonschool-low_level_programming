#include "lists.h"

dlistint_t *_find_node_at_index(unsigned int idx, dlistint_t *h);
dlistint_t *_create_node(int n, dlistint_t *prev, dlistint_t *next);

/**
 * insert_dnodeint_at_index - insert item at index
 * @h: pointer to pointer to head of list
 * @idx: index of item to be added
 * @n: node value
 *
 * Return: item at index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *item, *prev, *next;

	if (!h)
		return (NULL);

	item = _create_node(n, NULL, NULL);
	if (!item)
		return (NULL);

	if (!idx && !*h)
		*h = item;
	else if (!idx)
	{
		item->next = *h;
		(*h)->prev = item;
		*h = item;
	}
	else
	{
		prev = _find_node_at_index(idx - 1, *h);
		if (!prev)
		{
			free(item);
			item = NULL;
		}
		else
		{
			next = prev->next;
			prev->next = item;
			item->next = next;
			item->prev = prev;
			if (next)
				next->prev = item;
		}
	}
	return (item);
}

/**
 * _create_node - creates node
 * @n: node value
 * @prev: previous node
 * @next: next node
 *
 * Return: created node
 */
dlistint_t *_create_node(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *item = malloc(sizeof(dlistint_t));

	if (!item)
		return (NULL);
	item->n = n;
	item->prev = prev;
	item->next = next;
	return (item);
}

/**
 * _find_node_at_index - get node at index
 * @idx: index
 * @h: pointer to head
 *
 * Return: pointer to node at index
 */
dlistint_t *_find_node_at_index(unsigned int idx, dlistint_t *h)
{
	unsigned int count = 0;

	while (h && count != idx)
	{
		count++;
		h = h->next;
	}
	return (h);
}
