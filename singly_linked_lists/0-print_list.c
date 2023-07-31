#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		count++;
	}
	return (count);
}
