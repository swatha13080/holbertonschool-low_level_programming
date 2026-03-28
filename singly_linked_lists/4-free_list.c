#include "lists.h"

/**
 * free_list - free list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *next;

	if (!head)
		return;

	next = head->next;

	if (head->str)
		free(head->str);

	free(head);
	free_list(next);
}
