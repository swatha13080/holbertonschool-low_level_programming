#include "lists.h"

/**
 * add_dnodeint - add note to beginning of list
 * @head: pointer to head pointer
 * @n: int value of node
 *
 * Return: first element of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first = malloc(sizeof(dlistint_t));

	if (!first)
		return (NULL);
	if (!head)
	{
		free(first);
		return (NULL);
	}

	first->n = n;
	first->next = *head;
	first->prev = NULL;
	if (*head)
		(*head)->prev = first;
	*head = first;
	return (first);
}
