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
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
