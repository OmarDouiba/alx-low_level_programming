#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_tt;

	dog_tt = malloc(sizeof(dog_t));

	if (dog_tt == NULL)
	{
		return (NULL);
	}

	dog_tt->name = name;
	dog_tt->age = age;
	dog_tt->owner = owner;

	return (dog_tt);
}
