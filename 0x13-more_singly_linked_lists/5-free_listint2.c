#include "lists.h"

/**
 * free_listint2 - free link list
 * @head: pointer head
 */

void free_listint2(listint_t **head)
{
listint_t *temp;
temp = *head;
{
while (temp)
{
free(*head);
temp = temp->next;
*head = temp;
}
}
}
