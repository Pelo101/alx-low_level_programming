#include "lists.h"
#include <stdlib.h>

/**
*add_nodeint - add node at the beginning.
*@head: first node.
*@n: integer.
*Return: the address of new element or null.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
