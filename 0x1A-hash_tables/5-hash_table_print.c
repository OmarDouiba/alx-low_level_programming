#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht:  the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int index = 0, printed = 0;

	if(!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];

		while (tmp)
		{
			if (printed)
				printf(", ");

			printf("'%s': '%s'", tmp->key, tmp->value);

			tmp = tmp->next;
			printed = 1;
		}
	}
	printf("}\n");
}
