#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index index of a linked list.
 * @head: Head pointer
 * @index: Node index position
 *
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode = *head;
	listint_t *temp;
	unsigned int counter = 0;

	if (currentNode != NULL)
	{
		if (index == 0)
		{
			*head = currentNode->next;
			free(currentNode);
			return (1);
		}
		while (counter < index - 1 && currentNode != NULL)
		{
			currentNode = currentNode->next;
			counter++;
		}
		if (currentNode != NULL && currentNode->next != NULL)
		{
			temp = currentNode->next;
			currentNode->next = temp->next;
			free(temp);
			return (1);
		}
	}
	return (-1);
}
