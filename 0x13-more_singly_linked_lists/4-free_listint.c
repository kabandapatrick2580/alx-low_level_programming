#include "lists.h"

/**
 * free_listint - frees the linkedlist
 * @head: head of node
 */
void free_listint(listint_t *head)
{
	listint_t *pointer;

	while (head != NULL)
	{
		pointer = head->next;
		free(head);
		head = pointer;
	}
}
