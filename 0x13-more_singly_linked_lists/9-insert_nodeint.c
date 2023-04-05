#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Head pointer
 * @idx: Index position
 * @n: Node integer data
 * Return: Address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currentNode = *head;
	listint_t *newNode = malloc(sizeof(listint_t));
	unsigned int counter = 0;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (currentNode != NULL && counter < idx - 1)
	{
		currentNode = currentNode->next;
		counter++;
	}

	if (counter != idx - 1)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = currentNode->next;
	currentNode->next = newNode;

	return (newNode);
}
