#include "lists.h"
/**
 *add_dnodeint - print linled list
 *@head: ptr head
 *@n: number in the nodes
 *Return: ptr nodes
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
if (*head == NULL)
{
*head = new;
(*head)->next = NULL;
}
else
{
(*head)->prev = new;
new->next = *head;
*head = new;
}
return (new);
}
