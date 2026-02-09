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
int n_10;
char *sign;

srand(time(0));
n = rand() - RAND_MAX / 2;
n_10 = n % 10;

sign = n_10 == 0 ? "0" : n_10 > 5 ? "greater than 5" : "less than 6 and not 0";
printf("Last digit of %d is %d and is %s\n", n, n_10, sign);
return (0);
}
