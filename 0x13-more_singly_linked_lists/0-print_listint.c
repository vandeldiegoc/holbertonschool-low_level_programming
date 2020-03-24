#include "lists.h"

/**
 * print_listint - print link list but lost the previus nodo
 * @h: pointer head
 * Return: number of nodos in the link list
 */


size_t print_listint(const listint_t *h)
{
int i = 0;
if (h == NULL)
{
return(NULL);
}
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
