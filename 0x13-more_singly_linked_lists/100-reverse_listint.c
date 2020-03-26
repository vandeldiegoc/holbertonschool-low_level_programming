#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: Pointer to Pointer of the listint
 * Return: head
 */


listint_t *reverse_listint(listint_t **head)
{
listint_t *nextNode, *previousNode;
previousNode = NULL;

if (*head == NULL)
{
	return (NULL);
}
while ((*head) != NULL)
{
nextNode = (*head)->next;
(*head)->next = previousNode;
previousNode = (*head);
*head = nextNode;
}
(*head) = previousNode;
return (*head);
}
