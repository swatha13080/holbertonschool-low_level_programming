#include "variadic_functions.h"

/**
 * print_all - print all
 * @format: pattern of arguments
 */
void print_all(const char * const format, ...)
{
va_list args;
char *separator = "";
unsigned int count, index = 0;
type_print tp[] = {
	{'c', print_char},
	{'s', print_string},
	{'i', print_int},
	{'f', print_float},
	{0, NULL}
};

va_start(args, format);
while (format && format[index])
{
	count = 0;
	while (tp[count].type)
	{
		if (format[index] == tp[count].type)
		{
			printf("%s", separator);
			tp[count].print_type(args);
			separator = ", ";
		}
		count++;
	}
	index++;
}
printf("\n");
va_end(args);
}

/**
 * print_char - prints char
 * @args: cursor to char to be printed
 */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int - prints int
 * @args: cursor to int to be printed
 */
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - prints float
 * @args: cursor to float to be printed
 */
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_string - prints string
 * @args: cursor to string to be printed
 */
void print_string(va_list args)
{
char *s = va_arg(args, char *);

if (!s)
	s = "(nil)";
printf("%s", s);
}
