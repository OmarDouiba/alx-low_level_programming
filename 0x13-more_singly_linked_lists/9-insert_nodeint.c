#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node with a specified integer value
 * at the specified index in a linked list.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @idx: The index at which to insert the new node.
 * @n: The integer value to assign to the new node.
 *
 * Return: A pointer to the newly inserted node
 * or NULL if the insertion failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *new_node;

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

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	curr = *head;

	while (curr && idx > 1)
	{
		if (curr->next == NULL && idx != 1)
		{
			free(new_node);
			return (NULL);
		}

		curr = curr->next;
		idx--;
	}

	new_node->next = curr->next;
	curr->next = new_node;

	return (new_node);
}
