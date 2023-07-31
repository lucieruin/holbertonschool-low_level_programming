#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: the first node
 * @str: the linked list
 *
 * Return: newNode
 */

list_t *add_node(list_t **head, const char *str)
{
	struct list_s *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);


	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
