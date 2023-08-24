#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
*free_list - function that frees list_t.
*@head: first node.
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
