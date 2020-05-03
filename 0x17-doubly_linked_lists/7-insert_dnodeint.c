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


new = malloc(sizeof(dlistint_t));
if (new == NULL)
	return (NULL);

if (idx == 0)
{
new = add_dnodeint(h, n);
return (new);
}

for (i = 0; temp && i < idx - 1; i++)
{
if (temp->next == NULL)
{
free(new);
return (add_dnodeint_end(h, n));
}
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
