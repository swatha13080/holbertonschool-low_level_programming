#include <stdio.h>
/**
 * main - Prints a sentence
 *
 * Return: returns 0
 */
int main(void)
{
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

char *sign = n == 0 ? "zero" : n > 0 ? "positive" : "negative";

printf("%zu is %s\n", n, sign);
return (0);
}
