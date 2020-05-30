#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 *
 * @ht: hash table
 * @key: a key you're looking for.
 * Return: key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *ptr;
if (!ht || !(ht->array) || !key || strlen(key) == 0)
return (NULL);

idx = key_index((unsigned char *)key, ht->size);
ptr = ht->array[idx];
while (ptr != NULL)
{
if (strcmp(ptr->key, key) == 0)
{
return (ptr->value);
}
ptr = ptr->next;
}

return (NULL);
}
