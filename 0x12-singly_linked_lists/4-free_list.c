#include "lists.h"
/**
* free_list - Function that frees a list.
* @head: pointer of a list.
*/
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;

		free(head);
		head = node;
	}
}
