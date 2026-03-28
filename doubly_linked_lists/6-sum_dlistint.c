#include "lists.h"

/**
 * sum_dlistint - find the sum of all node values in a list
 * @head: pointer to head of list
 *
 * Return: the sum of the node values starting with head
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
