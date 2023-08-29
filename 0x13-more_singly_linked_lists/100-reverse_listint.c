#include "lists.h"
#include <stdio.h>

/**
*reverse_listint - a function that reverses a listint_t linked list.
*@head: first node.
*Return: pointer to the first node.
*/

listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev  = NULL;
	listint_t *temp;

	while (*head)
	{
		temp  = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	*head = prev;
	return (*head);

}
