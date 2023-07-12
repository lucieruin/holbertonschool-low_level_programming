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
	char *ar;
	unsigned int c = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc(c);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		ar[i] = 0;

	return (ar);
}
