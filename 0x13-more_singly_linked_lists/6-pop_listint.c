#include "lists.h"
/**
* pop_listint - function that deletes the head node.
* @head: Double pointer of a list.
* Return: 0 if list is empty. otherwise data.
*/
int pop_listint(listint_t **head)
{
	listint_t *first_node;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	first_node = *head;
	*head = first_node->next;
	data = first_node->n;
	free(first_node);
	return (data);
}
