#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees list.
 * @head: Head pointer
 * Return: Nothing
*/

void free_listint(listint_t *head)
{
	listint_t *currentNode;

	while (head != NULL)
	{
		currentNode = head;
		head = head->next;
		free(currentNode);
	}
}
