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
int *result, i;

if (min > max)
	return (NULL);

result = malloc((max - min + 1) * sizeof(*result));
if (!result)
	return (NULL);

for (i = 0; i < max - min + 1; i++)
	*(result + i) = min + i;

return (result);
}
