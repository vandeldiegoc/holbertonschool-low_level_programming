#include "lists.h"

/**
 * listint_len - number of nodo
 * @h: pointer head
 * Return: number of nodos in the link list
 */

size_t listint_len(const listint_t *h)
{
if (h == NULL)
{
return (NULL);
}
int i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
