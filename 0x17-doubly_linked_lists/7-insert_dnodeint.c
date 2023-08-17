#include "lists.h"

/**
 * insert_dnodeint_at_index - inserting node at index
 * @h: head of linked lists
 * @idx: index of nodes
 * @n: integer number
 *
 * Return: new node at index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nouveau_node = malloc(sizeof(dlistint_t));
	dlistint_t *courent = *h;
	unsigned int count = 0;

	if (nouveau_node == NULL)
		return (NULL);

	nouveau_node->n = n;
	if (idx == 0)
	{
		nouveau_node->prev = NULL;
		nouveau_node->next = *h;
		if (*h	!= NULL)
		{
			(*h)->prev = nouveau_node;
		}
		*h = nouveau_node;
	}
	else
	{
		while (count < idx - 1)
		{
			if (courent == NULL)
			{
				free(nouveau_node);
				return (NULL);
			}
			courent = courent->next;
			count++;
		}
		nouveau_node->prev = courent;
		nouveau_node->next = courent->next;

		if (courent->next != NULL)
		{
			courent->next->prev = nouveau_node;
		}
		 courent->next = nouveau_node;
	}
	return (nouveau_node);
}
