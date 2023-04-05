#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Returns the sum of all the data (n) of a linked list.
 * @head: Head pointer
 * Return: Sum of all the data
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *currentNode = head;

	while (currentNode != NULL)
	{
		sum = sum + currentNode->n;
		currentNode = currentNode->next;
	}

	return (sum);
}
