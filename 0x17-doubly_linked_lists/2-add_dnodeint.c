#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	if (head == NULL || *head == NULL)
		return (NULL);

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = NULL;

	tmp->next = (*head);
	(*head)->prev = tmp;
	(*head) = tmp;
	return (tmp);
}
