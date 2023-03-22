#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog- Entry point
 * Description: Function that creates a new dog
 * @name: Name string
 * @age: Age
 * @owner: Owner
 * Return: A brand new Dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
char *name_copy;
char *owner_copy;
dog_t *dog;

dog = malloc(sizeof(dog_t));
if (dog == NULL)
	return (NULL);

name_copy = strdup(name);
owner_copy = strdup(owner);

if (name_copy == NULL || owner_copy == NULL)
{
	free(dog);
	free(name_copy);
	free(owner_copy);
	return (NULL);
}

dog->name = name_copy;
dog->age = age;
dog->owner = owner_copy;

return (dog);
}
