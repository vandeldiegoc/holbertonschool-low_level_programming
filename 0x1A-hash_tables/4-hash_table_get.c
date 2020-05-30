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
idx = key_index((unsigned char *)key, ht->size);
if (ht->array == NULL || ht == NULL || key == NULL)
return (NULL);

while (ht->array[idx] != NULL)
{
if (strcmp(ht->array[idx]->key, key) == 0)
{
return (ht->array[idx]->value);
}
ht->array[idx] = ht->array[idx]->next;
}
return (NULL);
}
