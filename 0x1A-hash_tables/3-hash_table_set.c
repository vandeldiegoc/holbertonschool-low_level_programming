#include "hash_tables.h"

/**
 * hash_table_set - put new_node_node_node into hash table
 * @ht: hash table
 * @key: key hash table
 * @value: value
 * Return: Always EXIT_SUCCESS.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *i, *new_node;
size_t index;

if (!key || !value || !ht)
{
return (0);
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (0);
}

index = key_index((const unsigned char *)key, ht->size);
for (i = ht->array[index]; i != NULL; i = i->next)
{
if (strcmp(i->key, key) == 0)
{
if (i->value)
{
free(i->value);
}
i->value = strdup(value);
free(new_node);
return (1);
}
}
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
