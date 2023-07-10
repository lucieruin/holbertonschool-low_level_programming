#include "main.h"

/**
 * *create_array - function that creates an array of char
 * @size: size of array
 * @c: character
 *
 * Return: NULL if size or array = 0 else return ar
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

		if (ar == 0)
			return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
