/**
 * _strspn - find how many letters in prefix are from accept.
 * @s: string to be checked.
 * @accept: prefix values.
 *
 * Return: int result.
 */

unsigned int _strspn(char *s, char *accept)
{
	int dict[57] = {0}, result = 0, stop = 0, index = 0;

	while (accept[index])
	{
		dict[accept[index] - 65] += 1;
		index++;
	}

	index = 0;
	while (!stop && s[index])
	{
		if (dict[s[index++] - 65] > 0)
		{
			result++;
		}
		else
			stop++;
	}

	return (result);
}
