#include <stdio.h>
/**
 * main - Prints a sentence
 *
 * Return: returns 0
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
	putchar('0' + i);
}
putchar('\n');

return (0);
}
