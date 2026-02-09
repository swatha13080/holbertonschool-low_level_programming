#include <stdio.h>
/**
 * main - Prints a sentence
 *
 * Return: returns 0
 */
int main(void)
{
int i;

for (i = 'z'; i > 'a' - 1; i--)
{
	putchar(i);
}
putchar('\n');

return (0);
}
