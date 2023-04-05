#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Function that frees a list.
 * @head: Head pointer
 * Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *currentNode;

	while (*head != NULL)
	{
		currentNode = *head;
		*head = (*head)->next;
		free(currentNode);
	}

	*head = NULL;
}
