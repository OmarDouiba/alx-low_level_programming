#include "lists.h"
/**
* list_len - Function that returns the number of elements in a linked.
* @h: pointer to the head of the list.
* Return: Number of nodes.
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
