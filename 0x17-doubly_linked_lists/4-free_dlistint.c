#include "lists.h"

/**
 * free_dlistint - frees the linked list
 * @head: head of the node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *courent = head;
	dlistint_t *next;

	while (courent != NULL)
	{
		next = courent->next;
		free(courent);
		courent = next;
	}
}
