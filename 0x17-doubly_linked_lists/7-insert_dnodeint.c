#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp, *tmp1;

	if (!h || !(*h))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		new->next = (*h);
		(*h)->prev = new;
		(*h) = new;
		return (*h);
	}
	
	tmp = (*h);
	while (tmp && idx > 1)
	{
		tmp = tmp->next;
		idx--;
	}
	if (tmp && idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		tmp1 = tmp->next;
		tmp->next = new;
		new->prev = tmp;
		new->next = tmp1;
		tmp1->prev = new;
		return (new);
	}
	else if (tmp->next == NULL && idx == 1)
	{
		new = add_dnodeint_end(h, n);
		tmp->next = new;
		new->prev = tmp;
		return (new);
	}
	return (NULL);
}
