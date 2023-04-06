#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: head of node
 *
 * Return: first node of the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *my_node;
	listint_t *other_node;

	if (*head == NULL)
	{
		return (NULL);
	}
	other_node = (*head)->next;
	(*head)->next = NULL;

	while (other_node != NULL)
	{
		my_node = other_node->next;
		other_node->next = *head;

		*head = other_node;
		other_node = my_node;
	}
	return (*head);
}
