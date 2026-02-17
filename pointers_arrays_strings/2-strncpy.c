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
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (!src[i])
		dest[i] = '\0';

	return (dest);
}
