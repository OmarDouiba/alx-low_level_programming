#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: pointer to pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if successful, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prv;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	curr = *head;
	prv = NULL;
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}
	while (index >= 1 && curr)
	{
		if (curr->next == NULL && index != 1)
		{
			return (-1);
		}
		prv = curr;
		curr = curr->next;
		index--;
	}
	prv->next = curr->next;
	free(curr);
	return (1);
}
