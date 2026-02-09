#include <stdio.h>
/**
 * main - Prints a sentence
 *
 * Return: returns 0
 */
int main(void)
{
int i = 'a';

while (i <= 'z')
{
	if (i == 'q' || i == 'e')
	{
		i++;
		continue;
	}
	putchar(i++);
}
putchar('\n');

return (0);
}
