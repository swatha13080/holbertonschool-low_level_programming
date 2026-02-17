/**
 * string_toupper - make s uppercase.
 * @s: string to change.
 *
 * Return: pointer to s.
 */
char *string_toupper(char *s)
{
	int diff = 'A' - 'a', i = 0;

	for (; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += diff;
	}

	return (s);
}
