#include "lists.h"
/**
 * free_dlistint - function that frees a list
 * @head: node
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
	head = NULL;
}
