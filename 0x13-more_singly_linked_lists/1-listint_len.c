#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - Entry point
 * Description: Returns number of elements in the list
 * @h: Head pointer
 * Return: Number of elements
*/

size_t listint_len(const listint_t *h)
{
	listint_t *ptr = (listint_t *)h;
	int count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
return (count);
}
