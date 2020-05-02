#include "lists.h"
/**
 *print_dlistint - print linled list
 *@h: pointer to head of doubly linked list
 *Return: number of nodos
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t i;
while (h != NULL)
	{
	printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
