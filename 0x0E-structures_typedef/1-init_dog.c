#include "dog.h"

/**
 * init_dog - Entry poin
 * @d: Pointer variable
 * @name: Name variable
 * @age: Age parameter
 * @owner: Owner variable
 *
 * Description: Struct initialization
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
