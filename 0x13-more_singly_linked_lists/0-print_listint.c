#include "lists.h"
/**
* print_listint - Function that prints all the elements of list.
* @h: pointer to the head of the list.
*
* Return: Number of Nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
