#include "main.h"

/**
 * puts2 - print every other char of the string s.
 * @s: string to be printed.
 */
void puts2(char *s)
{
	int i;

	for (i = 0; s[i]; i += 2)
	{
		_putchar(s[i]);
		if (!s[i + 1])
			break;
	}
	_putchar('\n');
}
