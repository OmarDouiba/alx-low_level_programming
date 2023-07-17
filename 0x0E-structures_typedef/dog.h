#ifndef DOG_H
#define DOG_H


/**
* struct dog - Structure representing a dog
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
*
* Description: This structure represents a dog and stores information about
*		its name, age, and owner.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);

#endif
