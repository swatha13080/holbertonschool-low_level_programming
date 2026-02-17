#include "main.h"

/**
 * _strncpy - copies n chars of src string to dest.
 * @src: string to be copied.
 * @dest: pointer to paste copied string.
 * @n: number of chars to be copied.
 *
 * Return: a pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest */
	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	/* Fill the rest of dest with '\0' */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
