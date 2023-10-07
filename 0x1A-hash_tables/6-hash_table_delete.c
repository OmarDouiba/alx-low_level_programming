#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table
 */


void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *prev = NULL;
	unsigned long int index = 0;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		while (tmp)
		{
			free(tmp->key);
			free(tmp->value);
			prev = tmp;
			tmp = tmp->next;
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
