#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - program returns node at index.
 *@head: start of linkedn list
 *@index: position of node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int count = 0;
	dlistint_t *current_node = head;


	while (current_node != NULL && count < index)
	{
		count++;
		current_node = current_node->next;
	}
	if (count == index)
	{
		return (current_node);
	}
	return (NULL);


}
