#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 *
 * Return: sum of the n arguments, 0 otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum;
unsigned int i;

if (!n)
	return (0);

va_start(args, n);

sum = 0;
for (i = 0; i < n; i++)
	sum += va_arg(args, int);

va_end(args);
return (sum);
}
