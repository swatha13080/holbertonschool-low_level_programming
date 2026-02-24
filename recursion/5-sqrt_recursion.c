#include "main.h"

int lookup_sqrt(int n, int low, int high);

/**
 * _sqrt_recursion - return sqrt n.
 * @n: num.
 *
 * Return: int result.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);

	return (lookup_sqrt(n, 0, n));
}

/**
 * lookup_sqrt - lookup sqrt.
 * @n: num used.
 * @low: start.
 * @high: end.
 *
 * Return: int result.
 */
int lookup_sqrt(int n, int low, int high)
{
	int mid;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;

	if (n / mid == mid && n % mid == 0)
		return (mid);
	else if (n / mid < mid)
		return (lookup_sqrt(n, low, mid - 1));
	else
		return (lookup_sqrt(n, mid + 1, high));
}
