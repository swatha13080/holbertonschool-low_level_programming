#include "dog.h"
#include <stdlib.h>

char *_strdup(char *s);

/**
 * new_dog - create new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *result = malloc(sizeof(dog_t));

	if (!result)
		return (NULL);

	(*result).name = _strdup(name);
	(*result).age = age;
	(*result).owner = _strdup(owner);

	return (result);
}

/**
 * _strdup - create a copy of s
 * @s: the string to be copied
 *
 * Return: a pointer to the copy of s, otherwise NULL
 */
char *_strdup(char *s)
{
	char *result;
	size_t i, len = 0;

	if (!s)
		return (NULL);

	while (s[len])
		len++;

	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		result[i] = s[i];

	return (result);
}
