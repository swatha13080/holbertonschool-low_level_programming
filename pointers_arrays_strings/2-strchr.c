#include <stddef.h>

/**
 * _strchr - find pointer to char c in s.
 * @s: string to be checked.
 * @c: char to look for.
 *
 * Return: pointer to char found or NULL.
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	while (s[count])
		if (s[count++] == c)
			return (s + count - 1);

	return (NULL);
}
