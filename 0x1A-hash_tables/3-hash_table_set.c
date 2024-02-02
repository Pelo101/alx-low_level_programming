#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 *hash_table_set - function that adds an element to the hash table.
 *@ht: hash table
 *@key: key in hash table.
 *@value: value in hash table.
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **array;
	hash_node_t *curr_node;
	hash_node_t *new_node;
	unsigned long index;

	if (!ht || !key || key[0] == '\0' || !value)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	array = ht->array;
	curr_node = array[index];

	while (curr_node != NULL)
	{
		if (strcmp(key, curr_node->key) == 0)
		{
			free(curr_node->value);
			curr_node->value = strdup(value);
			return (1);
		}
		curr_node = curr_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = array[index];
	array[index] = new_node;
	return (1);
}
