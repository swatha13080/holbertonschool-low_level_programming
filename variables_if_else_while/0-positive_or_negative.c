#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints a sentence
 *
 * Return: returns 0
 */
int main(void)
{
int n;
char *sign;
srand(time(0));
n = rand() - RAND_MAX / 2;

sign = n == 0 ? "zero" : n > 0 ? "positive" : "negative";
printf("%d is %s\n", n, sign);
return (0);
}
