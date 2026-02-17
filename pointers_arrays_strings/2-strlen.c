/**
 * _strlen - find length of a string.
 * @s: string to be measured.
 *
 * Return: int length of string s.
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;

	return (count);
}
