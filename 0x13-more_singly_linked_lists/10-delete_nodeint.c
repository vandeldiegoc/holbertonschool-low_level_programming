#include "lists.h"

/**
 * delete_nodeint_at_index - number of nodo
 * @head: pointer head
 * @index: number of nodo to select
 * Return: -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *a;
if (*head)
{
if (index == 0)
{
a = (*head)->next;
free((*head));
*head = a;
return (1);
}

while (*head && (i < (index - 1)))

i++, head = &(*head)->next;

if (i != (index - 1))
return (-1);

a = (*head)->next->next;
free((*head)->next);
(*head)->next = a;
return (1);
}
return (-1);
}
