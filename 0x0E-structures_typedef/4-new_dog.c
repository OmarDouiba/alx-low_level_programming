#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: passed from main
 * @age: passed from main
 * @owner: passed from main
 *
 * Return: pointer to the struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_tt;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dog_tt = malloc(sizeof(dog_t));

	if (dog_tt == NULL)
	{
		return (NULL);
	}

	dog_tt->name = _strdup(name);
	if (dog_tt->name == NULL)
	{
		free(dog_tt->name);
		free(dog_tt);
		return (NULL);
	}

	dog_tt->age = age;

	dog_tt->owner = _strdup(owner);
	if (dog_tt->owner == NULL)
	{
		free(dog_tt->name);
		free(dog_tt->owner);
		free(dog_tt);
		return (NULL);
	}

	return (dog_tt);
}
/**
 *_strdup -  a pointer to a newly allocated space in memory, which
 *	    contains  a  copy of the string given as a parameter.
 *@str: string
 *
 *Return:  a pointer to a new string which is a duplicate of the string str
 *		NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup_str = malloc((len + 1));
	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		*(dup_str + i) = *(str + i);
	}

	return (dup_str);
}
