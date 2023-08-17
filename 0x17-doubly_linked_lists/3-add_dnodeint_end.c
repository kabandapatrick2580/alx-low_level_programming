#include "lists.h"

/**
 * add_dnodeint_end - adding node at the end
 * @head: head ogf node
 * @n: integer
 *
 * Return: new node created, 0 if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nouveau_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *courent = *head;

	if (nouveau_node == NULL)
		return (NULL);

	nouveau_node->n = n;
	nouveau_node->next = NULL;

	if (*head == NULL)
	{
		nouveau_node->prev = NULL;
		*head = nouveau_node;
	}
	else
	{
		while (courent->next != NULL)
		{
			courent = courent->next;
		}
		courent->next = nouveau_node;
		nouveau_node->prev = courent;
	}

	return (nouveau_node);
}
