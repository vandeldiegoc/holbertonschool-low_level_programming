#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table.
 * @size: size of array
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_array;
	hash_node_t *node_array = NULL;
	unsigned long int i = 0;
	/* table creation */
	hash_array = malloc(sizeof(hash_table_t));
		if (hash_array == NULL)
		{
			return (NULL);
		}

	/* string pieces */
	hash_array_array = malloc(size * sizeof(hash_node_t *));
	if (hash_array == NULL)
	{
		free(hash_array);
		return (NULL);
	}

	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}

	hash_array->size = size;
	return (hash_array);
}
