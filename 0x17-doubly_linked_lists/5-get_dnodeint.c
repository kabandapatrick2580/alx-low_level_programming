#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at any index
 * @head: head of the linked list
 * @index: any index
 *
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *courent = head;
	unsigned int count_it = 0;

	while (courent != NULL)
	{
		if (count_it == index)
			return (courent);
		courent = courent->next;
		count_it++;
	}

	return (NULL);
}
