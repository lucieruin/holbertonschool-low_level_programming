#include "lists.h"

/**
 * dlistint_len - returns the numbers of elements in a linked list
 * @h: a pointer
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
