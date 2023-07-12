#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: value from min
 * @max: value from max
 *
 * Return: ar
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * (max - min + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ar[i] = min;
		min++;
	}
	return (ar);
}
