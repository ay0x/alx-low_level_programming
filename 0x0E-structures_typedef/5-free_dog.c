#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free dog on memory
 * @d: Dog on memory
 * Return: Void
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
