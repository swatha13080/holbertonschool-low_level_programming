#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes action on each element of array
 * @array: array of elements to be used as arguments to action
 * @size: size of array
 * @action: pointer to function applied on array elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

for (i = 0; i < size; i++)
{
	action(array[i]);
}
}
