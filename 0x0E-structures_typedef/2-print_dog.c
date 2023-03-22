#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - Entry point
 * @d: Dog struct
 * Description: Prints a dog struct
 * Return: Void
 */

void print_dog(struct dog *d)
{
	char not_available[] = "(nil)";

	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: %s\n", not_available);
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		if (d->age == 0.0)
		{
			printf("Age: %s\n", not_available);
		}
		else
		{
			printf("Age: %.1f\n", d->age);
		}

		if (d->owner == NULL)
		{
			printf("Owner: %s\n", not_available);
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
