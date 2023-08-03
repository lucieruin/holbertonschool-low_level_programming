#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: first node
 * @index: index of the node that should be deleted
 *
 * Return: 1 if is succeded or -1 if it fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *idx;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	idx = *head;

	if (index == 0)
	{
		*head = idx->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(idx);
		return (1);
	}
	while (idx != NULL && count < index)
	{
		idx = idx->next;
		count++;
	}
	if (idx == NULL)
		return (-1);

	idx->prev->next = idx->next;
	if (idx->next != NULL)
		idx->next->prev = idx->prev;
	free(idx);
	return (1);
}
