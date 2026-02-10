#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints form n to 98
 *
 * @n: first num to be printed
 */

void print_to_98(int n)
{
	int inc, i;

	inc = (n < 98) - (n > 98);

	for (i = n; i != 98; i += inc)
		printf("%d, ", i);
	printf("%d\n", 98);
}
