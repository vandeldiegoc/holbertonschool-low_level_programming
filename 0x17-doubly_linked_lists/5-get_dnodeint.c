#include "lists.h"
/**
 * get_dnodeint_at_index - choise node
 * @head: pointer of head
 * @index: number nodo
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0; i < index; i++)
{
if (head == NULL)
return (NULL);
else
{
head = head->next;
}
}
return (head);
}
