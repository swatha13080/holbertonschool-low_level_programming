#include "main.h"

/**
 * print_last_digit - Rertuns last digit of int in
 * @n: the int to be checked
 *
 * Return: returns n mod 10
 */

int print_last_digit(int n)
{
	int digit;

	digit = n < 0 ? -1 * (n % 10) : n % 10;
	_putchar('0' + digit);
	return (digit);
}
