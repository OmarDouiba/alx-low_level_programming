#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table.
 * @key: key you are looking for.
 *
 * Return: The value of the key if it found, otherwise NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index = 0;

	if (ht || key)
	{
		index = key_index((const unsigned char *) key, ht->size);

		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);

			tmp = tmp->next;
		}
	}
	return (NULL);
}
