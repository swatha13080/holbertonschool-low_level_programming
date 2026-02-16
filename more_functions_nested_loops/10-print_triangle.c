#include "main.h"

/**
 * print_triangle - prints a triangle of height n followed by \n.
 * @n: the height of the triangle to be printed.
 */

void print_triangle(int n)
{
	int i, c;

	c = 0;
	while (c++ < n)
	{
		for (i = 0; i < n - c; i++)
			_putchar(' ');
		for (i = n - c; i < n; i++)
			_putchar('#');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
