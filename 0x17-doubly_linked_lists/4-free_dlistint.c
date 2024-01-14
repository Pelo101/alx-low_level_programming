#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 *@head: beginning of linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node;
	dlistint_t *next_node;

	if (head)
	{
		curr_node = head;
		next_node = head->next;

		while (next_node)
		{

			free(curr_node);
			curr_node  = next_node;
			next_node = next_node->next;
		}
		free(curr_node);

	}


}
