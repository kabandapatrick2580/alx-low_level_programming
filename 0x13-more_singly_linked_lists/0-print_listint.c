#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - prints elements of linked list list_int
 * @h: head of the node
 *
 * Return: node_counter
 */
size_t print_listint(const listint_t *h)
{
size_t node_counter = 0;

while (h != NULL)
{
	printf("%d\n", h->n);
	node_counter++;
	h = h->next;
}
return (node_counter);
}
