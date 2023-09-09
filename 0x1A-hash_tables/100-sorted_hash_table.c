#include "hash_tablesnew.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to the created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int gt;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(size * sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (gt = 0; gt < size; gt++)
		ht->array[gt] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * create_node - Creates a new node with the given key and value
 * @key: The key string
 * @value: The value string
 *
 * Return: A pointer to the created node
 */
shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *nouveau_node;

	nouveau_node = malloc(sizeof(shash_node_t));
	if (nouveau_node == NULL)
		return (NULL);

	nouveau_node->key = strdup(key);
	nouveau_node->value = strdup(value);
	nouveau_node->next = NULL;
	nouveau_node->sprev = NULL;
	nouveau_node->snext = NULL;

	return (nouveau_node);
}

/**
 * shash_table_set - Adds or updates a key/value pair in the sorted hash table
 * @ht: The sorted hash table
 * @key: The key string
 * @value: The value string
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *prev_node, *nouveau_node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];
	prev_node = NULL;

	while (node != NULL && strcmp(node->key, key) < 0)
	{
		prev_node = node;
		node = node->next;
	}

	if (node != NULL && strcmp(node->key, key) == 0)
	{
		free(node->value);
		node->value = strdup(value);
		return (1);
	}

	nouveau_node = create_node(key, value);
	if (nouveau_node == NULL)
		return (0);

	if (prev_node == NULL)
	{
		nouveau_node->next = ht->array[index];
		ht->array[index] = nouveau_node;
	}
	else
	{
		nouveau_node->next = prev_node->next;
		prev_node->next = nouveau_node;
	}

	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		nouveau_node->snext = ht->shead;
		ht->shead = nouveau_node;
	}
	else
	{
		node = ht->shead;
		while (node->snext != NULL && strcmp(key, node->snext->key) > 0)
			node = node->snext;

		nouveau_node->snext = node->snext;
		node->snext = nouveau_node;
	}

	if (nouveau_node->snext == NULL)
		ht->stail = nouveau_node;

	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key
 * in the sorted hash table
 * @ht: The sorted hash table
 * @key: The key string
 *
 * Return: The value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];

	while (node != (NULL))
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table in ascending order
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->snext != NULL)
			printf(", ");
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in descending order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev != NULL)
			printf(", ");
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *node, *next_node;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			next_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next_node;
		}
	}

	free(ht->array);
	free(ht);
}
