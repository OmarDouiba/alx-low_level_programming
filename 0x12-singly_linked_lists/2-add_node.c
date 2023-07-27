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
	list_t *tmp = (struct list_s *) malloc(sizeof(struct list_s));

	if (str == NULL)
	{
		printf("[0] (nil)");
	}

	tmp->str = strdup(str);
	tmp->len = _strlen(str);
	tmp->next = NULL;

	if (*head != NULL)
	{
		tmp->next = *head;
	}

	*head = tmp;
	return (*head);
}
