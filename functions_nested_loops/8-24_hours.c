#include "main.h"

/**
 * jack_bauer - prints minutes of the day
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			else
				_putchar('0');

			_putchar(i % 10 + '0');
			_putchar(':');

			if (j > 9)
				_putchar(j / 10 + '0');
			else
				_putchar('0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
