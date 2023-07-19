#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: an array
 * @size: number of element in the array
 * @cmp: pointer to the function to be used
 *
 * Return: - 1 if fail i if good
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
