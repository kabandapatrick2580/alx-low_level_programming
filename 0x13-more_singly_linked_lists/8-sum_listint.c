#include "lists.h"
/**
 * sum_listint - sume of data nodes
 * @head: head of node
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *my_node;

	if (head == NULL)
	{
		return (0);
	}
	my_node = head;
	while (my_node != NULL)
	{
		sum += my_node->n;
		my_node = my_node->next;
	}
	return (sum);
}
