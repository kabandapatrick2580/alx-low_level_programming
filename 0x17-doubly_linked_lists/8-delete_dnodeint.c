#include "lists.h"

/**
 * delete_dnodeint_at_index - deleting node at any index in linked list
 * @head: head of linked list
 * @index: index of the node
 *
 * Return: -1 if failed, 1 if succeeded
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *courent = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(courent);
		return (1);
	}
	while (count < index)
	{
		if (courent == NULL)
		{
			return (-1);
		}
		courent = courent->next;
		count++;
	}

	courent->prev->next = courent->next;
	if (courent->next != NULL)
	{
		courent->next->prev = courent->prev;
	}
	free(courent);
	return (1);
}
