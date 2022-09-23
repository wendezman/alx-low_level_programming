#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 * Return: pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;

	if (!size)
		return (NULL);

	hasht = calloc(1, sizeof(hash_table_t));
	if (!hasht)
		return (NULL);
	hasht->size = size;
	hasht->array = calloc(size, sizeof(hash_node_t *));
	if (!hasht->array)
	{
		free(hasht);
		return (NULL);
	}
	return (hasht);
}
