#include "main.h"

/**
 * print_alphabet - Prints alphabet
 *
 * Return: returns 0
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
