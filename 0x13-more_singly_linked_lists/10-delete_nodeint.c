#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at any index
 * @head: head of node
 * @index: index of the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *my_node, *other_node;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	my_node = *head;
	other_node = NULL;
	for (i = 0; i < index; i++)
	{

	if (my_node == NULL)
	{
		return (-1);
	}
	other_node = my_node;
	my_node = my_node->next;
	}
	if (other_node == NULL)
	{
		*head = my_node->next;
	}
	else
	{
		other_node->next = my_node->next;
	}
	free(my_node);

	return (1);
}
