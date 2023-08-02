#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: first node
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextNode;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		nextNode = head->next;
		free((void *)head);
		head = nextNode;
	}
}
