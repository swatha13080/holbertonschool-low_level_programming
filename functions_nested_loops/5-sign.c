#include "main.h"

/**
 * print_sign - Rertuns the sign of int n
 * @n: the int to be checked
 *
 * Return: returns -1, 0, 1 depending on the sign of n
 */

int print_sign(int n)
{
	char message;

	message = n == 0 ? '0' : n > 0 ? '+' : '-';

	_putchar(message);
	return ((n > 0) - (n < 0));
}
