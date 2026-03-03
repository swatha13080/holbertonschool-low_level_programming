#include <stdlib.h>

/**
 * array_range - malloc an array with range from min to max.
 * @min: starting int.
 * @max: ending int.
 *
 * Return: a pointer to int array.
 */
int *array_range(int min, int max)
{
int *result;

if (min > max)
	return (NULL);

result = malloc((max - min + 1) * sizeof(*result));
if (!result)
	return (NULL);

for (; min < max + 1; min++)
	*(result + min) = min;

return (result);
}
