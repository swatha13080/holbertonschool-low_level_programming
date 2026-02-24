#include "main.h"

int test_values(int n, int start);

/**
 * _sqrt_recursion - return sqrt n.
 * @n: num.
 *
 * Return: int result.
 */
int _sqrt_recursion(int n)
{
	return (test_values(n, n / 2 + 1));
}

/**
 * _test_values - tests values.
 * @n: num.
 * @start: start.
 *
 * Return: int result.
 */
int test_values(int n, int start)
{
	int val = start * start;

	if (n < 0 || val < n)
		return (-1);
	else if (val > n)
		return (test_values(n, start - 1));
	else
		return (start);
}
