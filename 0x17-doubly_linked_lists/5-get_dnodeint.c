#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int pos = 0;

	tmp = head;
	while (tmp)
	{
		if (pos != index)
		{
			tmp = tmp->next;
			pos++;
		}
		else
		{
			return (tmp);
		}
	}
	return (NULL);
}
