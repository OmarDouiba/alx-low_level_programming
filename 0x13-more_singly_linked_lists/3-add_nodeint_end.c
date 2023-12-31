#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a given list
 * @head: double pointer to the head of the list
 * @n: intger to be added to the list
 *
 * Return: address of the new element, or NULL if it failed
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}

		tmp->next = new_node;
	}

	return (new_node);
}
