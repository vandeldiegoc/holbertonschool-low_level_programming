#include "hash_tables.h"

/**
 * hash_table_set - put node into hash table
 * @ht: hash table
 * @key: key hash table
 * @value: value
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t  *node = NULL, *temp;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			else
				return (1);
		}
		temp = temp->next;
	}
	node = malloc(sizeof(hash_node_t *));
	if (node == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (ht->array[index] != NULL)
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	else
		ht->array[index] = node;

return (1);
}
