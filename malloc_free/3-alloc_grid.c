#include <stdlib.h>

void populate_2d_int_array(int **arr, int w, int h);

/**
 * alloc_grid - allocated a pointer to a w by h array.
 * @h: height of array.
 * @w: width of array.
 *
 * Return: a pointer to 2d int array.
 */
int **alloc_grid(int w, int h)
{
int **result, i = 0;

if (w <= 0 || h <= 0)
	return (NULL);

result = malloc(h * sizeof(*result));
if (!result)
	return (NULL);

for (i = 0; i < h; i++)
{
	result[i] = malloc(w * sizeof(*(result[i])));
	if (!result[i])
	{
		while (i > 0)
			free(result[--i]);
		free(result);
		return (NULL);
	}
}

populate_2d_int_array(result, w, h);

return (result);
}

/**
 * populate_2d_int_array - populates an array with zeros.
 * @arr: array to be populated.
 * @h: height of array.
 * @w: width of array.
 */
void populate_2d_int_array(int **arr, int w, int h)
{
	int i, j;

	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
			*(*(arr + i) + j) = 0;
}
