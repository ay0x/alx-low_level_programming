#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Entry point
 * Description: Returns the number of elements in a linked list_t list.
 * @h: name of the list
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
