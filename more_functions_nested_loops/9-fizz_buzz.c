#include <stdio.h>

void fizz_buzz(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
* fizz_buzz - print fizz for multiples of 3, buzz for multiples of 5
* , fizzbuzz for both, otherwise the number from 1 to 100.
*/

void fizz_buzz(void)
{
	int i;
	char *fizz = "Fizz", *buzz = "Buzz", *fizzbuzz = "FizzBuzz";

	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
			printf("%s", fizzbuzz);
		else if (i % 5 == 0)
			printf("%s", buzz);
		else if (i % 3 == 0)
			printf("%s", fizz);
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}

	putchar('\n');
}
