#include "lists.h"

/**
 * add_nodeint_end - adding new node at the end
 * @head: head of the node
 * @n: integer
 *
 * Return:new node created at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addnew_nodeint, *current;

	addnew_nodeint = malloc(sizeof(listint_t));
	if (addnew_nodeint == NULL)
	{
		free(addnew_nodeint);
		return (NULL);
	}
	addnew_nodeint->n = n;
	if (*head == NULL)
	{
		*head = addnew_nodeint;
		return (addnew_nodeint);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = addnew_nodeint;
	return (addnew_nodeint);
}
