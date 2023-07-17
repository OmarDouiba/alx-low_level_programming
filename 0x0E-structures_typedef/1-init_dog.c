/**
 * init_dog - Initialize a dog structure
 * @d: Pointer to the dog structure to be initialized
 * @name: Pointer to the name string of the dog
 * @age: The age of the dog
 * @owner: Pointer to the owner string of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
