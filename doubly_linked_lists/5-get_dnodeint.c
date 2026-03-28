#include "lists.h"

/**
 * get_dnodeint_at_index - find item at index
 * @head: pointer to head of list
 * @index: index of desired item
 *
 * Return: item at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int count = 0;

	while (ptr && count != index)
	{
		count++;
		ptr = ptr->next;
	}

	return (ptr ? ptr : NULL);
}
