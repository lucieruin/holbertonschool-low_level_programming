#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: a pointer
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next)
	{
		if (h == NULL)
		{
			return (0);
		}
		else
		{
			printf("%u\n", h->n);
		}
		count++;
	}
	return (count);
}
