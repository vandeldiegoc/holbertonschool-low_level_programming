#include "lists.h"

/**
 * add_nodeint - add new node in yhe link list
 * @head: pointer head
 * @n: data inside n
 * Return: pointer head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
