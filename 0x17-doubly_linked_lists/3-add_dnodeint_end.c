#include "lists.h"
/**
 *add_dnodeint_end - print linled list
 *@head: ptr head
 *@n: number in the nodes
 *Return: ptr nodes
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *temp = *head;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}

new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
new->prev = temp;
}
return (new);
}
