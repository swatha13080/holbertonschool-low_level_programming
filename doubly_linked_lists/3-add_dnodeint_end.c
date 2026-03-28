#include "lists.h"

dlistint_t *_create_node(const int n, dlistint_t *next, dlistint_t *prev);
dlistint_t *_place_last(dlistint_t **h, dlistint_t *last);

/**
 * add_dnodeint_end - add note to end of list
 * @head: pointer to head pointer
 * @n: int value of node
 *
 * Return: inserted element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last;

	if (!head)
		return (NULL);

	last = _create_node(n, NULL, NULL);

	if (!last)
		return (NULL);

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}

	return (_place_last(head, last));
}

/**
 * _create_node - create a node
 * @n: int value of node
 * @next: pointer to next node
 * @prev: pointer to previous node
 *
 * Return: created node
 */
dlistint_t *_create_node(const int n, dlistint_t *next, dlistint_t *prev)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = next;
	node->prev = prev;
	return (node);
}

/**
 * _place_last - place node last at the end of list h
 * @h: pointer to beginning of list (NOT NULL)
 * @last: pointer to last node (NOT NULL)
 *
 * Return: last
 */
dlistint_t *_place_last(dlistint_t **h, dlistint_t *last)
{
	if ((*h)->next)
	{
		return (_place_last(&((*h)->next), last));
	}
	else
	{
		(*h)->next = last;
		return (last);
	}
}
