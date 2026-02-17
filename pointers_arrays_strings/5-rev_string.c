#include "main.h"

/**
 *  rev_string - reverse s.
 * @s: string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0, inc = 0;
	char temp;

	while (s[len])
		len++;

	while (inc < len / 2)
	{
		temp = s[inc];
		s[inc] = s[len - 1 - inc];
		s[len - 1 - inc] = temp;
		inc++;
	}
}
