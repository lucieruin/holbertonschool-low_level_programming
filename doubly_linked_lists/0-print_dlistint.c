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

	for (count = 0; h != NULL; h = h->next, count++)
	{
		if (h == NULL)
		{
			return (0);
		}
		else
		{
			printf("%d\n", h->n);
		}
	}
	return (count);
}
