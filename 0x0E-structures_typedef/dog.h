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

typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
