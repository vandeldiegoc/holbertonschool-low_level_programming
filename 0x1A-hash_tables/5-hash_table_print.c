#include "hash_tables.h"

/**
 * hash_table_print -  print hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *node = NULL;
	int count = 0;

if (ht != NULL)
{
printf("{");
while (idx < ht->size)
{
node = (ht->array)[idx];
while (node != NULL)
{
if (count !=  0)
printf(", ");
count++;
printf("'%s': ", node->key);
printf("'%s'", node->value);
node = node->next;
}
idx++;
}
printf("}\n");
}
}
