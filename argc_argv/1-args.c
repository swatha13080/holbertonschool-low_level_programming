#include <stdio.h>
/**
 * main - print num of args in argv[].
 * @argc: number of args.
 * @argv: arg array.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
