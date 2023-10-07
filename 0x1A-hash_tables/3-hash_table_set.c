#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key to be added to the hash table
 * @value: corresponding value to be added to the hash table
 * Return: 1 if it succeeded, 0 otherwise
 */



int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *cols;
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	cols = ht->array[index];
	while (cols)
	{
		if (strcmp(cols->key, key) == 0)
		{
			free(cols->value);
			cols->value = strdup(value);
			return (1);
		}
		cols = cols->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (!ht->array[index])
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
