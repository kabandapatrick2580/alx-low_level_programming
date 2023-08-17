#include "lists.h"

/**
 * dlistint_len - returning number of elements
 * @h: head of node
 *
 * Return: 0 if no head esple return number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int sp = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		sp++;
	}
	return (sp);
}
