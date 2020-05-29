#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table.
 * @size: size of array
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_array;
	unsigned long int i;
	hash_node_t *node_array = NULL;
	/* table creation */
	hash_array = malloc(sizeof(hash_table_t));
		if (hash_array == NULL)
		{
			return (NULL);
		}

	/* string pieces */
	node_array = malloc(sizeof(hash_node_t) * size);
	if (node_array == NULL)
	{
		free(hash_array);
		return (NULL);
	}

	hash_array->array = &node_array;
	hash_array->size = size;

	while (i < size)
	{
		hash_array->array[i] = NULL;
		i++;
	}
return (hash_array);
}
