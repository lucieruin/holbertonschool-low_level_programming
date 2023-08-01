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
	unsigned int len = 0;
	list_t *newNode;

	if (head == NULL || str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	while (str[len] != 0)
	{
		newNode->str = malloc(len + 1);
		if (newNode->str == NULL)
		{
			free(newNode);
			return (NULL);
		}
		len++;
	}

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
