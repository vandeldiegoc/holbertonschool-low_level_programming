#include "lists.h"
/**
 * sum_dlistint - choise node
 * @head: pointer of head
 * Return: suma of n
 */
int sum_dlistint(dlistint_t *head)
{
int i = 0;

if (head == NULL)
return (0);

while (head != NULL)
{
i += head->n;
head = head->next;
}
return (i);
}


