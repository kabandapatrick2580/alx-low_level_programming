#include "lists.h"

/**
 * get_nodeint_at_index - retuns a node at any index
 * @head: head of node
 * @index: counter
 *
 * Return: a node at any index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	listint_t *acurrent_node;

	if (head == NULL)
	{
		return (NULL);
	}
	acurrent_node = head;
	for (a = 0; a < index; a++)
	{
		if (acurrent_node == NULL)
			return (NULL);
		acurrent_node = acurrent_node->next;
	}
	if (acurrent_node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (acurrent_node);
	}
}
