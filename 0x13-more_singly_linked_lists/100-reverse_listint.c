#include "lists.h"
#include <stdio.h>

/**
*reverse_listint - a function that reverses a listint_t linked list.
*@head: first node.
*Return: pointer to the first node.
*/

listint_t *reverse_listint(listint_t **head)
{


	listint_t *prev = NULL;
	listint_t *current = *head;




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
