#include <stdlib.h>

/**
 * _strdup - create a copy of s.
 * @s: the string to be copied.
 *
 * Return: a pointer to the copy of s, otherwise NULL.
 */
char *_strdup(char *s)
{
char *result;
int i = 0, len = 0;

while (s[i++])
	len++;
len++;
i = 0;
result = malloc(len);

for (i = 0; i < len; i++)
	result[i] = s[i];
result[len] = '\0';

return (result);
}
