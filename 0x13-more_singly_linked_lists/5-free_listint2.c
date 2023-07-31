#include "lists.h"
/**
* free_listint2 - Function that frees a list.
* @head: double pointer of a list.
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	*head = NULL;
}
