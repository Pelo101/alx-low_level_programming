#include "lists.h"
#include <stdlib.h>

/**
*reverse_listint - a function that reverses a listint_t linked list.
*@head: first node.
*Return: pointer to the first node.
*/

listint_t *reverse_listint(listint_t **head)
{


	listint_t *prev;
	listint_t *current;

	prev = NULL;
	current = *head;


	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;

	}
	*head = prev;
	return (*head);
}
