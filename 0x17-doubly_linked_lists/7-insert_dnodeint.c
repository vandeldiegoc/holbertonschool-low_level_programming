#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node
 * @h: pointer of head
 * @idx: number nodo
 * @n: data nodo
 * Return: inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *temp = *h, *new;
if (*h == NULL)
	return (NULL);

if (new == NULL)
	return (NULL);

new = malloc(sizeof(dlistint_t));
new->n = n;

if (idx == 0)
{
new = add_dnodeint(h, n);
return (new);
}

for (i = 1; i < idx; i++)
{
if (temp == NULL)
return (NULL);
else
{
temp = temp->next;
}
}

new->next = temp->next;
new->prev = temp;
temp->next = new;
new->next->prev = new;
return (new);
}
