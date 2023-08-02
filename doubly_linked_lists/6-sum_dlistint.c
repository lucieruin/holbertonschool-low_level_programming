#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a linked list
 * @head: first node
 *
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;
	return (sum);
}
