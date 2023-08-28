#include "lists.h"
#include <stdlib.h>

/**
*get_nodeint_at_index - function that returns the nth node
* of a listint_t linked list
*@head: first node.
*@index: index of node.
*Return: node at index.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
