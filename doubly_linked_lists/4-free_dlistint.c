#include "lists.h"

/**
 * free_dlistint - free list
 * @head: pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (!head)
		return;

	next = head->next;

	free(head);
	free_dlistint(next);
}
