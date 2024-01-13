#include <stdio.h>
#include <stdlib.h>
#include  "lists.h"

/**
 **add_dnodeint_end - program addds end node.
 *@head: head of list.
 *@n:data
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *curr;
	dlistint_t *end_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (end_node == NULL)
	{
		return (NULL);
	}

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
		return (end_node);
	}

	 curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	end_node->prev = curr;
	curr->next = end_node;

	return (end_node);

}
