#include "lists.h"

/**
 * listint_t *add_nodeint_end(lidd_nodeint - add node in the end
 * @head: pointer head
 * @n: data inside n
 * Return: pointer new
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *aux;
new = malloc(sizeof(listint_t));
if (!new)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
else
{
aux = *head;
while (aux->next != NULL)
{
aux = aux->next;
}
aux->next = new;
return (new);
}
}
