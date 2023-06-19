#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Entry point
 * Description: Function to initialize a dog struct
 * @d: The struct variable pointer
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}

}
