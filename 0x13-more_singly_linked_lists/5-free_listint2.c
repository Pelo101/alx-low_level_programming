#include "lists.h"
#include <stdlib.h>

/**
*free_listint2 -  a function that frees a listint_t list.
*@head: first node.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{

		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;


}
