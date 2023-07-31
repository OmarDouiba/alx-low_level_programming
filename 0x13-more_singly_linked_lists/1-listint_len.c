#include "lists.h"
/**
* listint_len - Function that returns the number of elements in a linked.
* @h: pointer to the head of the list.
* Return: Number of nodes.
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
