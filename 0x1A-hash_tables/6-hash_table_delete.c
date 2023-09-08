#include "hash_tables.h"

/**
 * hash_table_delete - Removes and deallocates a hash table and its contents.
 * @ht: The hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *p, *q;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		p = ht->array[x];
		while (p != NULL)
		{
			q = p->next;
			free(p->key);
			free(p->value);
			free(p);
			p = q;
		}
	}

	free(ht->array);
	free(ht);
}
