#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Entry point
 * @d: Dog struct
 * Description: Prints a dog struct
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		if (d->age == 0.0)
		{
			printf("Age: (nil)");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}

		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
