#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: parameter function
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
