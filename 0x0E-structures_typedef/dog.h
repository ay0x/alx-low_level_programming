#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Dog struct
 * @name: Name variable
 * @age: Age variable
 * @owner: Owner variable
 *
 * Description: Dog struct and its element
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
