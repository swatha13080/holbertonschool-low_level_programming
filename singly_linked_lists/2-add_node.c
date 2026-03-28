#include "lists.h"

/**
 * add_node - add note to beginning of list
 * @head: pointer to head pointer
 * @str: string to store
 *
 * Return: first element of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first = malloc(sizeof(list_t));

	if (!first || !head)
		return (NULL);
	printf("no issue so far");
	if (!str)
		first->str = NULL;
	else
	{
		first->str = strdup(str);
		if (!first->str)
			return (NULL);
	}

	first->next = *head;
	return (first);
}
