#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: head of node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		h = h->next;
		node_counter++;
	}
	return (node_counter);
}
