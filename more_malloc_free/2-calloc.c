#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of block
 * @size: size of block
 *
 * Return: ar
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc(nmemb * size);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = 0;
	return (ar);
}
