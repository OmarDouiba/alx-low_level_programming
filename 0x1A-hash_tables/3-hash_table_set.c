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
	hash_node_t *newnode;
	int index;

	index = key_index(key, ht->size);
	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;

	if (!ht->array[index])
	{
		ht->array[index] = newnode;
	}
	else
	{
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	}
	return (1);
}
