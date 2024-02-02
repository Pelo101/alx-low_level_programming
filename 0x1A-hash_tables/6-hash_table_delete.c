#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *hash_table_delete - function that deletes a hash table.
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp, *temp_next;

	if (!ht)
	{
		return;

	}
	while (index < ht->size)
	{

		temp = ht->array[index];
		while (temp)
		{
			temp_next = temp->next;
			free(temp->value);
			free(temp->key);
			free(temp);
			temp = temp_next;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
