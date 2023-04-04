#include "lists.h"

/**
 * listint_len - Entry point
 * Desctription: The number of elements in a linked listint_t list.
 * @h: head pointer
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
		count++;
	}
	return (count);
}
