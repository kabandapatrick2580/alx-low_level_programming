#include "lists.h"

/**
 * sum_dlistint - sum of the data in linked list
 * @head: head of the linked list
 *
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *courent = head;
	int sum = 0;

	while (courent != NULL)
	{
		sum += courent->n;
		courent = courent->next;
	}

	return (sum);
}
