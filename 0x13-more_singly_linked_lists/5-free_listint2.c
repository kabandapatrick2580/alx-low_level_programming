#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of node
 */
void free_listint2(listint_t **head)
{
	listint_t *pointer, *next;

	if (head == NULL)
	{
		return;
	}
	pointer = *head;
	while (pointer != NULL)
	{
		next = pointer->next;
		free(pointer);
		pointer = next;
	}
	*head = NULL;
}
