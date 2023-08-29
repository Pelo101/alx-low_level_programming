#include "lists.h"
#include <stdlib.h>

/**
*delete_nodeint_at_index - function that deletes the node
* at index index of a listint_t linked list.
*@head: first node.
*@index: index of node.
*Return: 1 if it succeeded -1 if it fails.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;
	previous = NULL;


	for (i = 0; current != NULL && i < index; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	if (previous != NULL)
		previous->next = current->next;
	else
		*head = current->next;

	free(current);
	return (1);
}



