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

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
