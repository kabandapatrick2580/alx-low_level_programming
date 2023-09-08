#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table.
 * @ht: The hash table to search in.
 * @key: The key for which to retrieve the value.
 *
 * Return: The value associated with the key if found, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *cur;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	cur = ht->array[idx];

	/* Traverse the linked list at the index to find the key */
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
			return (cur->value); /* Key found, return its value */
		cur = cur->next;
	}

	return (NULL); /* Key not found */
}

