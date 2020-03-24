#include "lists.h"

/**
 * free_listint2 - free link list
 * @head: pointer head
 */

void free_listint2(listint_t **head)
{
    listint_t *ptr;

    if (head == NULL)
        return;

    while ((*head)->next != NULL)
    {
        ptr = (*head)->next;
        free(*head);
        *head = ptr;
    }
    free(*head);
    *head = NULL;
}
