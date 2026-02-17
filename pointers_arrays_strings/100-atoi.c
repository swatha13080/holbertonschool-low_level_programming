#include "main.h"

/**
 * _atoi - converts numbers in s to an int.
 * @s: string to be scanned.
 *
 * Return: 0 if no int found in s, otherwise, the int found in s.
 */
int _atoi(char *s)
{
	int sign = 0, i = 0, j = 0, k, result = 0, pow = 1;

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			/* find sign based on preceding minuses count */
			for (k = 0; k < i; k++)
				if (s[k] == '-')
					sign++;
			sign = sign % 2 == 0 ? 1 : -1;
			j = i + 1;
			while (s[j] && s[j] >= '0' && s[j] <= '9')
				j++;
			break;
		}
		else
			i++;
	}

	while (j > i)
	{
		result += sign * (s[j - 1] - '0') * pow;
		if (--j > i)
			pow *= 10;
	}

	return (result);
}
