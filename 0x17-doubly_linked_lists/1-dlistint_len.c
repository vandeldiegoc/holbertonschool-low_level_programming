#include "lists.h"

/**
 *dlistint_len - print linled list
 *@h: pointer to head of doubly linked list
 *Return: number of nodos
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}

