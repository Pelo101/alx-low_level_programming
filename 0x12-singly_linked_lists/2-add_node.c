#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
*add_node - add node at the beginning of list.
*@head: first node.
*@str: string.
*Return: singly linked list with new node.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);





}
