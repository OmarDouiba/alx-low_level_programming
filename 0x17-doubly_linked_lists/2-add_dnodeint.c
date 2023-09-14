#include "lists.h"
/**
 * add_dnodeint -  function that adds a new node at the beginning of a list
 * @head: node
 * @n: int
 * Return: new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		(*head) = new;
	}
	else
	{
		new->next = (*head);
		(*head)->prev = new;
		(*head) = new;
	}
	return (new);
}
