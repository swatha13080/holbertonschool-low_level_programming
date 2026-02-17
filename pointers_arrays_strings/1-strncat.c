#include "main.h"

/**
 * _strncat - appends n chars of src string to dest.
 * @src: string to be added.
 * @dest: pointer to append copied string.
 * @n: number of chars to be added.
 *
 * Return: a pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (src[j] && j < n)
		dest[i++] = src[j++];

	dest[i] = '\0';

	return (dest);
}
