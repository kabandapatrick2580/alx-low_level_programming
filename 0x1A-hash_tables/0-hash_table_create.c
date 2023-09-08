#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array for the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL if an error occur
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int idx = 0;

	if (size < 1)
		return (NULL);

	/* Allocate memory for the hash table structure */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/* Allocate memory for the array of hash_node_t pointers */
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;

	/* Initialize each element of the array to NULL */
	for (idx = 0; idx < size; idx++)
		ht->array[idx] = NULL;

	return (ht);
}
