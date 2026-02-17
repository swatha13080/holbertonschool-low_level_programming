#include "main.h"

/**
 * print_rev - print the string s in reverse.
 * @s: string to be printed.
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count])
		count++;

	while (count)
	{
		_putchar(s[count - 1]);
		count--;
	}
	_putchar('\n');
}
