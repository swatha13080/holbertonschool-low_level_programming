#include <stdio.h>
/**
 * main - print argv[0].
 * @argc: number of args.
 * @argv: arg array.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
