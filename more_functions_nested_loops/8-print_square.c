#include "main.h"

/**
 * print_square - prints a square of length n followed by \n.
 * @n: the lenght of the square to be printed.
 */

void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}

	if (n < 1)
		_putchar('\n');
}
