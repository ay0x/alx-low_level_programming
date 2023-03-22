#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Function that creates a new dog
 * @name: Name string
 * @age: Age
 * @owner: Owner
 *
 * Return: A brand new Dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len, owner_len, i;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (name_len = 0; name[name_len]; name_len++)
		;
	name_len++;
	new_dog->name = malloc(name_len * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		new_dog->name[i] = name[i];

	new_dog->age = age;

	for (owner_len = 0; owner[owner_len]; owner_len++)
		;
	owner_len++;

	new_dog->owner = malloc(owner_len * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < owner_len; i++)
		new_dog->owner[i] = owner[i];

	return (new_dog);
}
