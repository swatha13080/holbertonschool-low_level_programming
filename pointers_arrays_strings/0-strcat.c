#include "main.h"

/**
 * _strcat - appends src string to dest.
 * @src: string to be added.
 * @dest: pointer to append copied string.
 *
 * Return: a pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (src[j])
		dest[i++] = src[j++];

	dest[i] = '\0';

	return (dest);
}
