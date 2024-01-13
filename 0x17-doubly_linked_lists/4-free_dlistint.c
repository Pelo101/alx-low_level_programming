#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 *@head: beginning of linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	dlistint_t *new_node;

	if (curr != NULL)
	{
		new_node = curr->next;
		free(curr);
		curr = new_node;

	}


}
