#include "main.h"

/**
 * puts_half - print second half of string s.
 * @s: string to be printed.
 */
void puts_half(char *s)
{
	int len, i;

	while (s[len++])
		;

	for (i = len / 2; s[i]; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
