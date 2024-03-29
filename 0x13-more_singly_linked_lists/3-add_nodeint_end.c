#include "lists.h"
#include <stdlib.h>

/**
*add_nodeint_end - function that adds a new node
* at the end of a listint_t list.
*@head: first node.
*@n: integer.
*Return: address of new element or null if it fails.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *end;


	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return	(NULL);


	new_node->n = n;
	new_node->next = NULL;


	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	end = *head;
	while (end->next != NULL)
		end = end->next;

	end->next = new_node;
	return (new_node);

}
