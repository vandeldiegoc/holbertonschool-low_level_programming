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

new->n = n;
new->next = NULL;
if (idx == 0)
{

free(new);
new = add_dnodeint(h, n);
return (new);
}
for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
if (temp->next == NULL)
{
return (add_dnodeint_end(h, n));
}
new->next = temp->next;
new->prev = temp;
new->next->prev = new;
temp->next = new;
return (new);
}

else
temp = temp->next;
}

return (NULL);
}
