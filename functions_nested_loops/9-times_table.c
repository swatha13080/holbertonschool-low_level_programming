#include "main.h"

/**
 * times_table - prints times table of 9
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;

			if (k > 9)
				_putchar(k / 10 + '0');
			else
				if (j != 0)
					_putchar(' ');
			_putchar(k % 10 + '0');

			if (j == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
