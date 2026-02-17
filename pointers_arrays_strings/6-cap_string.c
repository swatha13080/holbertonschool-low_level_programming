/**
 * is_delimiter - find out if char c is a delimiter.
 * @c: char to be checked.
 *
 * Return: 1 if delimiter, 0 otherwise.
 */
int is_delimiter(char c)
{
	int i;
	char delims[] = " \t\n,;.!?\"(){}";

	for (i = 0; delims[i]; i++)
		if (c == delims[i])
			return (1);
	return (0);
}

/**
 * make_uppercase - makes char c uppercase.
 * @c: char to be changed.
 *
 * Return: uppercase of c if it was lowercase, otherwise return c.
 */
char make_uppercase(char c)
{
	return (c >= 'a' && c <= 'z' ? c + 'A' - 'a' : c);
}

/**
 * cap_string - make s uppercase.
 * @s: string to change.
 *
 * Return: pointer to s.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 || is_delimiter(s[i - 1]))
			s[i] = make_uppercase(s[i]);

		i++;
	}

	return (s);
}
