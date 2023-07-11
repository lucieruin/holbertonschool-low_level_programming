#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: a line
 * @height: a column
 *
 * Return: NULL if width or height = 0 or negative else return ar
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i;
	int j;

	if (width == 0 || width < 0)
		return (NULL);

	if (height == 0 || height < 0)
		return (NULL);
	ar = malloc(height * sizeof(int));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar == NULL)
		{
			for (i = 0; i < height; i++)
				free(ar[i]);
			free(ar);
				return (NULL);
		}

	for (j = 0; j < width; j++)
	{
		ar[i][j] = 0;
	}
	}

	return (ar);
}
