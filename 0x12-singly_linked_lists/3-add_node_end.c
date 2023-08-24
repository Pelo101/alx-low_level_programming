#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
*add_node_end - add node at the end .
*@head: head of list.
*@str: string
*Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int len = 0;
	list_t *new;
	list_t *temp = *head;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

		if (!new)
			return (NULL);

		new->str = strdup(str);
		new->len = len;
		new->next = NULL;

		if (*head == NULL)
		{
		*head = new;
		return (new);
		}
		else
		{
			while (temp->next)
			temp = temp->next;
			temp->next = new;
		}
	return (new);


}
