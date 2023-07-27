#include "lists.h"
/**
* _strlen - Function that count the lenght of a given string.
* @str: String.
* Return: Lenght of string.
*/
int _strlen(const char *str)
{
	int len = 0;

	while (str[len])
	{
		len++;
	}
	return (len);
}

/**
* add_node - Function That add new node at the beginning.
* @head: Pointer to the head of the list.
* @str: String that add to the list.
* Return: The address of the head.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (str == NULL || head == NULL)
	{
		return (NULL);
	}

	tmp = (struct list_s *) malloc(sizeof(struct list_s));

	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->str = strdup(str);
	if (tmp->str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->len = _strlen(str);
	tmp->next = NULL;

	if (*head != NULL)
	{
		tmp->next = *head;
	}

	*head = tmp;
	return (tmp);
}
