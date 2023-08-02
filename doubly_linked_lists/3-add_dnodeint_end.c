#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end
 * @head: first node
 * @n: value of newNode
 *
 * Return: newNode
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *prev;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	for (prev = NULL; *head != NULL; head = &(*head)->next)
		prev = *head;

	newNode->prev = prev;
	newNode->next = NULL;
	newNode->n = n;
	*head = newNode;

	return (newNode);
}
