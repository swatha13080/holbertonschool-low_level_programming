#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint h
 * @h: the list of items to print
 *
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (!h)
		return (0);

	printf("%d\n", h->n);
	return (1 + print_dlistint(h->next));
}
