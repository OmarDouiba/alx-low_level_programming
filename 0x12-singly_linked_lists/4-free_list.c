#include "lists.h"
/**
* free_list - Function that frees a list.
* @head: pointer of a list.
*/
void free_list(list_t *head)
{
	free(head);
}
