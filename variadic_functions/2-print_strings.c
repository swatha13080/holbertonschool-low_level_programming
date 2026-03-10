#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: separator between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args, args_copy;
unsigned int i;

if (!separator)
	separator = "";

va_start(args, n);
va_copy(args_copy, args);

for (i = 0; i < n; i++)
{
	if (!va_arg(args_copy, char *))
	{
		va_arg(args, char *);
		printf("(nil)");
	}
	else
		printf("%s", va_arg(args, char *));
	if (i + 1 < n)
		printf("%s", separator);
}
printf("\n");
va_end(args_copy);
va_end(args);
}
