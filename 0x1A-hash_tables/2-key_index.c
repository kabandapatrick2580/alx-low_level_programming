#include "hash_tables.h"
#include "hash_tablesnew.h"
/**
 * key_index - Computes the index for a given key in a hash table array.
 * @key: The key for which to calculate the index.
 * @size: The size of the hash table's array.
 *
 * Return: The calculated index as an unsigned long int.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Use the hash_djb2 function to calculate the hash value */
	hash_value = hash_djb2(key);

	/* Calculate the index by taking the remainder of the hash value */
	return (hash_value % size);
}
