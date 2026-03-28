#include "lists.h"

size_t _strlen(const char *s);
list_t *_create_node(const char *s, list_t *next);
list_t *_place_last(list_t **h, list_t *last);

/**
 * add_node_end - add note to end of list
 * @head: pointer to head pointer
 * @str: string to store
 *
 * Return: first element of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;

	if (!head)
		return (NULL);

	last = _create_node(str, NULL);

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}

	if (!last)
		return (NULL);

	return (_place_last(head, last));
}

/**
 * _create_node - create a node
 * @s: string value of node
 * @next: pointer to next node
 *
 * Return: created node
 */
list_t *_create_node(const char *s, list_t *next)
{
	list_t *node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	if (!s)
	{
		node->str = NULL;
		node->len = 0;
	}
	else
	{ node->str = strdup(s);
		if (!node->str)
		{
			free(node);
			return (NULL);
		}
		node->len = _strlen(s);
	}

	node->next = next;
	return (node);
}

/**
 * _place_last - place node last at the end of list h
 * @h: pointer to beginning of list (NOT NULL)
 * @last: pointer to last node (NOT NULL)
 *
 * Return: last
 */
list_t *_place_last(list_t **h, list_t *last)
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

/**
 * _strlen - find length of s
 * @s: string to be measured (not NULL)
 *
 * Return: length of string
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s && *s)
	{
		len++;
		s++;
	}
	return (len);
}
