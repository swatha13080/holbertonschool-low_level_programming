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

sign = n == 0 ? "0" : n > 5 ? "greater than 5" : "less than 6 and not 0";
printf("Last digit of %d is %d and is %s\n", n, n % 10, sign);
return (0);
}
