#include "lists.h"

/**
 * insert_nodeint_at_index - number of nodo
 * @head: pointer head
 * @n: data n
 * @idx: number of nodo to select
 * Return: newnod
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *newnod;
listint_t *nextnod = *head;
if (head == NULL)
{
return (NULL);
}
for (i = 1; i < idx; i++)
{
if (nextnod)
nextnod = nextnod->next;
else
return (NULL);
}
newnod = malloc(sizeof(listint_t));
if (newnod == NULL)
{
return (NULL);
}
newnod->n = n;
if (idx == 0)
{
newnod->next = *head;
*head = newnod;
}
else if (nextnod)
{
newnod->next = nextnod->next;
nextnod->next = newnod;
}
return (newnod);
}
