#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list,
 * and returns the head node’s data (n).
 * @head: Head pointer
 * Return: Head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *currentNode;

	if (*head == NULL)
	{
		return (0);
	}

	currentNode = *head;
	n = currentNode->n;
	*head = currentNode->next;
	free(currentNode);

	return (n);
}
