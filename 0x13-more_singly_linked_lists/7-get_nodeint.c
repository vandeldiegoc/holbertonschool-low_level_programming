#include "lists.h"

/**
 * get_nodeint_at_index - number of nodo
 * @head: pointer head
 * @index: number of nodo to select
 * Return: head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0; i <= index; i++)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
}
return (head);
}
