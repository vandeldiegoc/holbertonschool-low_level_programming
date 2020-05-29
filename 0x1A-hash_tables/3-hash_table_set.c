#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t  *node = NULL;

	index = key_index((unsigned char *)key, ht->size);	
	if (key == NULL || value == NULL)
	{
		return 0;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{	
		printf("2");
		return (0);
	}
	
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[index] != NULL)
		ht->array[index]->next = node;

	else
	{
	       	ht->array[index] = node;
	}
	return (1);
}
