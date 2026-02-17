#include "main.h"

/**
 * _strcpy - copies src string to dest.
 * @src: string to be copied.
 * @dest: pointer to paste copied string.
 *
 * Return: a pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
