#include "lists.h"

/**
 * add_dnodeint - adding node at the beginning
 * @head: head of node
 * @n: integer number
 *
 * Return: inserted node, 0 if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nouveau_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (nouveau_node == NULL)
	{
		return (NULL);
	}
	nouveau_node->n = n;
	nouveau_node->prev = NULL;
	nouveau_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = nouveau_node;
	}

	*head = nouveau_node;
	return (nouveau_node);
}
