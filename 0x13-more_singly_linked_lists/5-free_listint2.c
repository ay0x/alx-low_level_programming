#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Function that frees a list.
 * @head: Head pointer
 * Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
