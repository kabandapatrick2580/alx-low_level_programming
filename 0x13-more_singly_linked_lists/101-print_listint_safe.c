#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints listint in linked list
 * @head: head node
 *
 * Return: printed linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *typevalue;
	size_t count = 0;

	if (head == NULL)
	{
		exit(98);
	}
	typevalue = head;

	while (typevalue != NULL)
	{
		printf("[%p] %d\n", (void *)typevalue, typevalue->n);
		count++;

		if (typevalue <= typevalue->next)
		{
			printf("-> [%p] %d\n", (void *)typevalue->next, typevalue->next->n);
			exit(98);
		}
		typevalue = typevalue->next;
	}
	return (count);
}
