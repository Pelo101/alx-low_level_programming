#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 *hash_table_get - function that retrieves a value associated with a key.
 *@ht: hash table.
 *@key: key in table.
 *Return: value associated with the element, or NULL if key not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	hash_node_t *curr_node;
	hash_node_t *array;
	unsigned long index;

	if (!ht  || !key || key[0] == '\0')
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	array = ht->array[index];

	curr_node = array;

	if (curr_node != NULL)
	{
		if (strcmp(key, curr_node->key) == 0)
		{
			return (curr_node->value);

		}
		curr_node = curr_node->next;

	}
	return (NULL);
}
