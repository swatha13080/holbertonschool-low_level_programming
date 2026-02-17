#include "main.h"

/**
 * _puts - print the string s.
 * @s: string to be printed.
 */
void _puts(char *s)
{
	int count = 0;

	while (s[count])
	{
		_putchar(s[count]);
		count++;
	}
	_putchar('\n');
}
