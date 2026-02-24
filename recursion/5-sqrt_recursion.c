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
	return (test_values(n, n / 2));
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
	if (n < 0 || val < n)
		return (-1);
	else if (val > n)
		return (test_values(n, start - 1));
	else
		return (start);
}

int sqrt_helper(int n, int low, int high)
{
        if (low > high)
                return (-1);

        int mid = (low + high) / 2;

        if (mid == n / mid && n % mid == 0)
                return (mid);
        else if (mid > n / mid)
                return (sqrt_helper(n, low, mid - 1));
        else
                return (sqrt_helper(n, mid + 1, high));
}

int _sqrt_recursion(int n)
{
        if (n < 0)
                return (-1);

        return (sqrt_helper(n, 0, n));
}
