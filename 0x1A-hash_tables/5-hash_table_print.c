#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	int first = 1;
	hash_node_t *cur;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		cur = ht->array[idx];
		while (cur != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", cur->key, cur->value);
			first = 0;
			cur = cur->next;
		}
	}
	printf("}\n");
}
