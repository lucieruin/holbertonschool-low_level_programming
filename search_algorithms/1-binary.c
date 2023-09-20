#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index if is founded or -1 if not
*/

int binary_search(int *array, size_t size, int value)
{
	int index, mid, start = 0, end = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		printf("Searching in array: ");
		for (index = start; index <= end; index++)
		{
			printf("%d", array[index]);
			if (index < end)
				printf(", ");
			else
				printf("\n");
		}
		if (array[mid] ==  value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
