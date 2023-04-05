#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: head of the node
 *
 * Return: head's node data
 */
int pop_listint(listint_t **head)
{
	int pp;
	listint_t *pointer;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	pointer = *head;
	*head = (*head)->next;
	pp = pointer->n;
	free(pointer);

	return (pp);
}
