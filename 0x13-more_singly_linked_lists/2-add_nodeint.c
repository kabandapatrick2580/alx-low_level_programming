#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning
 * @head: head of node
 * @n: integer n
 *
 * Return: new node created at the beginning
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addnew_nodeint;

	addnew_nodeint = malloc(sizeof(listint_t));
	if (addnew_nodeint == NULL)
	{
		free(addnew_nodeint);
		return (NULL);
	}

	addnew_nodeint->n = n;

	addnew_nodeint->next = *head;
	*head = addnew_nodeint;
	return (addnew_nodeint);
}
