#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int idx = 0;
hash_node_t *node = NULL, *ptr = NULL;

while (idx < ht->size)
{
if (ht->array[idx])
{
node = ht->array[idx];
while (node)
{
ptr = node;
node = node->next;
free(ptr->key);
free(ptr->value);
free(ptr);
}
}
idx++;
}
free(ht->array);
free(ht);
}
