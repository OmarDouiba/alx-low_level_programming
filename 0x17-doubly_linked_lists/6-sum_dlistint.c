#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n) of a list
 * @head: node
 * Return: sum of list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
