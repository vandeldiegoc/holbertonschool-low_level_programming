#include "hash_tables.h"

/**
 * hash_table_set - put new_node into hash table
 * @ht: hash table
 * @key: key hash table
 * @value: value
 * Return: Always EXIT_SUCCESS.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t  *new_node = NULL;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new_node = ht->array[index];
	while (new_node)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			free(new_node->value);
			new_node->value = strdup(value);
			return (1);
		}
		new_node = new_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
return (1);
}
