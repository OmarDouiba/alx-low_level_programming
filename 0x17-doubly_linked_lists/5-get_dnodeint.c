#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns
 * the nth node of afunction that returns the nth node of a list
 * @head: node
 * @index: index we looking for
 * Return: NULL if it fails, otherwise list at certain index
 */
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
