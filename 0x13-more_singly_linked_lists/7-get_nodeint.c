#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: Head pointer
 * @index: The nth node of a linked list
 *
 * Return: The nth node of a linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *currentNode = head;

	while (currentNode != NULL && counter < index)
	{
		currentNode = currentNode->next;
		counter++;
	}
	return (currentNode);
}
