#include "hash_tables.h"
/**
 * hash_table_create - function that create hash table.
 * @size: the size of the hash table.
 *
 * Return: NULL if it fails otherwise Hash table.
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh_table = NULL;
	unsigned long int i = 0;

	if (!size)
		return (NULL);
	hsh_table = malloc(sizeof(struct hash_table_s));
	if (hsh_table == NULL)
		return (NULL);
	hsh_table->array = malloc(sizeof(struct hash_node_s *) * size);
	if (hsh_table->array == NULL)
		return (NULL);
	hsh_table->size = size;
	for (i = 0; i < size; i++)
		hsh_table->array[i] = NULL;
	return (hsh_table);
}
