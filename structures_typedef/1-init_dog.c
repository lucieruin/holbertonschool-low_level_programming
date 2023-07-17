#include "dog.h"

/**
 * init_dog - intialize a variable
 * @d: a pointer
 * @name: an argument
 * @age: a second argument
 * @owner: a third argument
 *
 * Return: (;) if d = NULL else d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
