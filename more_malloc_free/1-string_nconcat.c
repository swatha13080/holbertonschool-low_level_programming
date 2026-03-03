#include <stdlib.h>

size_t _strlen(char *s);

/**
 * string_nconcat - concatenate s1 and s2.
 * @s1: string to be concatenated.
 * @s2: string to be concatenated.
 * @n: length of s2 chars to be concatenated.
 *
 * Return: a pointer to new string, otherwise NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
size_t i, len1 = 0, len2 = 0;

len1 = _strlen(s1);
len2 = _strlen(s2) > n ? n : _strlen(s2);
result = malloc(len1 + len2 + 1);

if (result == NULL)
	return (NULL);

for (i = 0; i < len1; i++)
	result[i] = s1[i];
for (i = 0; i < len2; i++)
	result[i + len1] = s2[i];
result[len1 + len2] = '\0';

return (result);
}

/**
 * _strlen - find length of s.
 * @s: string to be measured.
 *
 * Return: length if string is valid, otherwise.
 */
size_t _strlen(char *s)
{
	int count = 0;

	while (s && s[count])
		count++;
	return (count);
}
