#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Struct for dog attributes
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Ownder of the dog
 *
 * Description: Struct to contain the attributes of a dog
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
