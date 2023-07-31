#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: pointer
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
