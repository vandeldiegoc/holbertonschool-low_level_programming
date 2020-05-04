#include "lists.h"
/**
 * delete_dnodeint_at_index - delete  node
 * @head: ptr head
 * @index: node to ptrete
 * Return: -1 or 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i;
dlistint_t *ptr = *head;
for (i = 0; i < index; i++)
{
if (head == NULL)
return (-1);
else
{
ptr = ptr->next;
}
}
if (*head  == NULL || ptr == NULL)
return (-1);

if (*head == ptr)
*head = ptr->next;

if (ptr->next != NULL)
ptr->next->prev = ptr->prev;

if (ptr->prev != NULL)
ptr->prev->next = ptr->next;

free(ptr);
return (1);
}
