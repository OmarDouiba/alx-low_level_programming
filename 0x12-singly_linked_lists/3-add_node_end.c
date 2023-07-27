#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * add_node_end - function that adds a new node at the end of a given list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: address of the new element, or NULL if it failed
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_t, *tmp;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new_t = (list_t *) malloc(sizeof(list_t));
	if (new_t == NULL)
	{
		return (NULL);
	}

	new_t->str = strdup(str);
	if (str == NULL)
	{
		free(new_t->str);
		return (NULL);
	}

	new_t->len = _strlen(str);
	if (*head == NULL)
	{
		*head = new_t;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_t;
	}
	return (new_t);
}
