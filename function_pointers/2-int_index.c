#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers to be searched
 * @size: size of array
 * @cmp: pointer to function to compare values of array
 *
 * Return: index of the first element cmp flags, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0 || !cmp)
	return (-1);

for (i = 0; i < size; i++)
{
	if (cmp(array[i]))
		return (i);
}
return (-1);
}
