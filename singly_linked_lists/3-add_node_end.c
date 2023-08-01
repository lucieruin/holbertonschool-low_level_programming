#include "lists.h"

/**
 * *add_node_end - adds a new node at the end
 * @head: the first node
 * @str: characters
 *
 * Return: newNode
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
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
	newNode->next = NULL;

	while (*head)
	{
		head = &(*head)->next;
	}
	*head = newNode;

	return (newNode);
}
