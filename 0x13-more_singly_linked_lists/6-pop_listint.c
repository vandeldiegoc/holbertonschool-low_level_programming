#include "lists.h"

/**
 * pop_listint - deletes the head node  and returns the head node’s data (n)
 * @head: pointer head
 * Return: data
 */

int pop_listint(listint_t **head)
{
if (*head == NULL)
	return (0);
listint_t *temp;
int data;
temp = *head;
data = (*head)->n;
(*head) = (*head)->next;
free(temp);
return (data);
}
