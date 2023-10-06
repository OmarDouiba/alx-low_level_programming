#include "hash_tables.h"
/**
 * hash_table_create - function that create hash table.
 * @size: the size of the hash table.
 *
 * Return: NULL if it fails otherwise Hash table.
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hsh_table = NULL;

	if (size <= 0)
		return (NULL);

	hsh_table = malloc(sizeof(hash_table_t));
	if (!hsh_table)
		return (NULL);

	hsh_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!hsh_table->array)
		return (NULL);

	hsh_table->size = size;

	for (i = 0; i < size; i++)
		hsh_table->array[i] = NULL;

	return (hsh_table);
}
