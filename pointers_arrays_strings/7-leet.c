/**
 * encrypt_char - encrypt char c.
 * @c: char to be changed.
 *
 * Return: encryption of c if it valid, otherwise, return c.
 */
char encrypt_char(char c)
{
	int i;
	const char valid_chars[] = "aAeEoOTtlL";
	const char dictionary[] = "4433007711";

	for (i = 0; valid_chars[i]; i++)
		if (c == valid_chars[i])
			return (dictionary[i]);
	return (c);
}

/**
 * leet - encrypt s.
 * @s: string to change.
 *
 * Return: pointer to s.
 */
char *leet(char *s)
{
	int i = 0;

	while (s[i])
	{
		s[i] = encrypt_char(s[i]);
		i++;
	}

	return (s);
}
