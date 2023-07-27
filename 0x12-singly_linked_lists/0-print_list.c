#include "lists.h"
/**
* print_list - Function that prints all the elements of list.
* @h: pointer to the head of the list.
*
* Return: Number of Nodes.
*/

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
