#include "main.h"

/**
 * _memcpy - copy values from src to dest.
 * @dest: memory area to be set.
 * @src: value to copy.
 * @n: length of area to copy.
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		n--;
		dest[n] = src[n];
	}
	return (dest);
}
